#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 510, INF = 0x3f3f3f3f;

int n, m;
int g[N][N];
int dis[N];
bool book[N];

void dijkstra(){
	memset(dis, 0x3f, sizeof dis);
  	dis[1] = 0;
  
  	for(int i = 1; i <= n; i++){
    	int u = -1;
      	for(int j = 1; j <= n; j++){
        	if(!book[j] && (u == -1 || dis[u] > dis[j]))
              	u = j;
        }
      	book[u] = true;
      
      	for(int j = 1; j <= n; j++)
          	dis[j] = min(dis[j], dis[u] + g[u][j]);
    }
}

int main() {
  
  	cin >> n >> m;
  	memset(g, 0x3f, sizeof g);
  	while(m--){
    	int a, b, c;
      	cin >> a >> b >> c;
      	g[a][b] = min(g[a][b], c);
    }
  
  	dijkstra();
	
  	if(dis[n] == INF) dis[n] = -1;
  	cout << dis[n] << endl;
  
	return 0;
}


