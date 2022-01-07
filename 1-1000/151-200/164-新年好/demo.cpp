#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;

typedef pair<int, int> PII;

const int N = 5e4 + 10, M = 2e5 + 10, INF = 0x3f3f3f3f;

int n, m;
int h[N], to[M], w[M], ne[M], idx = 0;
int q[N], dis[6][N];
int source[6];
bool book[N];

void add(int a, int b, int c){
	to[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
}

void dijkstra(int st, int dis[]){
	memset(dis, 0x3f, N * 4);
  	dis[st] = 0;
  	memset(book, 0, sizeof book);
  
  	priority_queue<PII, vector<PII>, greater<PII> > heap;
  	heap.push({0, st});
  
  	while(!heap.empty()){
    	PII t = heap.top();
      	heap.pop();
      
      	int u = t.second;
      	if(book[u]) continue;
      	
      	book[u] = true;
      
      	for(int i = h[u]; ~i; i = ne[i]){
        	int j = to[i];
          	if(dis[j] > dis[u] + w[i]){
            	dis[j] = dis[u] + w[i];
              	heap.push({dis[j], j});
            }
        }
    }
}

int dfs(int u, int st, int distance){
	if(u > 5) return distance;
  	
  	int res = INF;
  	for(int i = 1; i <= 5; i++){
    	if(!book[i]){
        	int ne = source[i];
          	book[i] = true;
          	res = min(res, dfs(u + 1, i, distance + dis[st][ne]));
          	book[i] = false;
        }
    }
  
  	return res;
}

int main() {
  
  	cin >> n >> m;
  	source[0] = 1;
  	for(int i = 1; i <= 5; i++) cin >> source[i];
  	memset(h, -1, sizeof h);
  
  	while(m--){
      	int a, b, c;
      	cin >> a >> b >> c;
      	add(a, b, c), add(b, a, c);
	}
  
  	for(int i = 0; i < 6; i++) dijkstra(source[i], dis[i]);
  	
  	memset(book, 0, sizeof book);
  	cout << dfs(1, 0, 0) << endl;
	
	return 0;
}


