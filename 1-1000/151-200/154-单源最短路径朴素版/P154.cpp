#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 510, INF = 0x3f3f3f3f;

int n, m;
int g[N][N];
int dis[N];
bool book[N];

int dijkstra(){
	memset(dis, 0x3f, sizeof dis);
    dis[1] = 0;
    
    for(int i = 1; i <= n; i++){
		int u = -1;
        
        for(int j = 1; j <= n; j++){
            if(!book[j] && (u == -1 || dis[u] > dis[j]))
                u = j;
        }
        
        book[u] = true;
        
        for(int v = 1; v <= n; v++)
        	dis[v] = min(dis[v], dis[u] + g[u][v]);
    }
    
    if(dis[n] == INF) return -1;
    return dis[n];
}

int main() {
    
    cin >> n >> m;
    memset(g, 0x3f, sizeof g);
    
    while(m--){
        int a, b, c;
        cin >> a >> b >> c;
        g[a][b] = min(g[a][b], c);
    }
    
    for(int i = 1; i <= n; i++) g[i][i] = 0;
    
    cout << dijkstra() << endl;
	
	return 0;
}


