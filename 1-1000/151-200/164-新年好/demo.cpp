#include <iostream>
#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;

typedef pair<int, int> PII;

const int N = 5e4 + 10, M = 2e5 + 10, INF = 0x3f3f3f3f;

int n, m;
int h[N], to[M], w[M], ne[M], idx = 0;
int q[N], dis[6][N], source[6] = {1};
bool book[N];
int ans = INF;

void add(int a, int b, int c){
	to[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
}

void dijkstra(int st, int dis[]){
	memset(dis, 0x3f, N * 4);
  	memset(book, 0, sizeof book);
  	dis[st] = 0;
  
  	priority_queue<PII, vector<PII>, greater<PII> > heap;
  	heap.push({0, st});
  
  	while(!heap.empty()){
    	PII t = heap.top();
      	heap.pop();
      
      	int u = t.second;
      	if(book[u]) continue;
      	book[u] = true;
      
      	for(int i = h[u]; ~i; i = ne[i]){
        	int v = to[i];
          	if(dis[v] > dis[u] + w[i]){
            	dis[v] = dis[u] + w[i];
              	heap.push({dis[v], v});
            }
        }
    }
}

void dfs(int u, int st, int distance){
	if(u > 5){
    	ans = min(ans, distance);
      	return;
    }
  
  	for(int i = 1; i <= 5; i++){
    	if(!book[i]){
        	int ne = source[i];
          	book[i] = true;
          	dfs(u + 1, i, distance + dis[st][ne]);
          	book[i] = false;
        }
    }
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
  
  	for(int i = 0; i <= 5; i++) dijkstra(source[i], dis[i]);
  	
  	memset(book, 0, sizeof book);
    dfs(1, 0, 0);
    
    cout << ans << endl;
	
	return 0;
}
