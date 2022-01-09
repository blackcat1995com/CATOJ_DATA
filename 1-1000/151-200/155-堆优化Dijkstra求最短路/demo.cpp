#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;

typedef pair<int, int> PII;

const int N = 2e5 + 10, INF = 0x3f3f3f3f;

int n, m;
int h[N], to[N], w[N], ne[N], idx = 0;
int dis[N];
bool book[N];

void add(int a, int b, int c){
    to[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
}

int dijkstra(){
    memset(dis, 0x3f, sizeof dis);
    dis[1] = 0;
    
    priority_queue<PII, vector<PII>, greater<PII> > heap;
    heap.push({0, 1});
    
    while(!heap.empty()){
        PII t = heap.top();
        heap.pop();
        
        int d = t.first, u = t.second;
        //if(book[u]) continue;
        book[u] = true;
        
        for(int i = h[u]; ~i; i = ne[i]){
            int j = to[i];
            if(dis[j] > dis[u] + w[i]){
                dis[j] = dis[u] + w[i];
                heap.push({dis[j], j});
            }
        }
    }
    if(dis[n] == INF) return -1;
    return dis[n];
}

int main() {
	
	scanf("%d%d", &n, &m);
	
	memset(h, -1, sizeof h);
	
	while(m--){
	    int a, b, c;
	    scanf("%d%d%d", &a, &b, &c);
	    add(a, b, c);
	}
	
	printf("%d\n", dijkstra());

	return 0;
}
