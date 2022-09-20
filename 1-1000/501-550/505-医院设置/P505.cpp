#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 110, INF = 0x3f3f3f3f;

int n;
int cnt[N], g[N][N];
int res = INF;

int main() {
  	
  	memset(g, 0x3f, sizeof g);
  	cin >> n;
  
  	for(int i = 1; i <= n; i++){
      	int x, y;
      	cin >> cnt[i] >> x >> y;
    	g[i][i] = 0;
      	if(x) g[i][x] = g[x][i] = 1;
      	if(y) g[i][y] = g[y][i] = 1;
    }
  
  	// Floyd Ä£°å
  	for(int k = 1; k <= n; k++)
      	for(int i = 1; i <= n; i++)
          	for(int j = 1; j <= n; j++)
              	g[i][j] = min(g[i][j], g[i][k] + g[k][j]);	// ËÉ³Ú²Ù×÷
  
  	
  	for(int i = 1; i <= n; i++){
    	int sum = 0;
      	for(int j = 1; j <= n; j++)
          	sum += g[i][j] * cnt[j];
      
      	res = min(res, sum);
    }
  
  	cout << res << endl;
	
	return 0;
}

