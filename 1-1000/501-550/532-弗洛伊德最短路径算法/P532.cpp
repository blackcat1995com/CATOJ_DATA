#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 55, INF = 0x3f3f3f3f;

int n;
int g[N][N];

int main() {
  
  	cin >> n;
  	memset(g, 0x3f, sizeof g);
  
  	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++){
        	int t;
          	cin >> t;
          	if(t) g[i][j] = t;
          	else if(i != j) g[i][j] = INF;
        }
    }
  
  	// Floyd ģ��
  	for(int k = 1; k <= n; k++)
      	for(int i = 1; i <= n; i++)
          	for(int j = 1; j <= n; j++)
              	g[i][j] = min(g[i][j], g[i][k] + g[k][j]);	// �ɳڲ���
  
  	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++){
        	if(i == j) cout << 0 << " ";
          	else if(g[i][j] == INF) cout << -1 << " ";
          	else cout << g[i][j] << " ";
        }
      	puts("");
    }
  
	return 0;
}

