#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 110, INF = 0x3f3f3f3f;

int n, m;
int g[N][N];
int res = -INF;

int main() {
  
  	cin >> n >> m;
  	memset(g, 0x3f, sizeof g);
  
  	while(m--){
    	int a, b, c;
      	cin >> a >> b >> c;
      	g[a][b] = g[b][a] = min(g[a][b], c);
    }
  
  	// Floyd Ä£°å
  	for(int k = 1; k <= n; k++)
      	for(int i = 1; i <= n; i++)
          	for(int j = 1; j <= n; j++)
              	g[i][j] = min(g[i][j], g[i][k] + g[k][j]);	// ËÉ³Ú²Ù×÷
  
  	for(int i = 1; i <= n; i++){
    	if(g[1][i] == INF){
        	puts("-1");
          	return 0;
        }
      	res = max(res, g[1][i]);
    }
  
  	cout << res << endl;
  
	return 0;
}

