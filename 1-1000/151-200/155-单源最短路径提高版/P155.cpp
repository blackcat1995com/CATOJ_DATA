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
    priority_queue<PII> q;
    q.push({0, 1});
    
    while(q.size()){
        PII t = q.top();
        
        q.pop();
        
        int u = t.second;
        
        if(book[u]) continue;
        
        for(int i = h[u]; ~i; i = ne[i]){
            int v = to[i];
            if(dis[v] > dis[u] + w[i]){
                dis[v] = dis[u] + w[i];
                q.push({dis[v], v});
            }
        }
       
    }
    
    if(dis[n] == INF) return -1;
    return dis[n];
}

int main() {

    cin >> n >> m;
    
    memset(h, -1, sizeof h);
    
    while(m--){
        int a, b, c;
        cin >> a >> b >> c;
        add(a, b, c);
    }

    cout << dijkstra() << endl;
	return 0;
}


