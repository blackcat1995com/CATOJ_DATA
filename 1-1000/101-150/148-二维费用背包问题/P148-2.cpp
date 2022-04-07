#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int n, V, W;
int f[1010][N][N];

int main() {
  
  	cin >> n >> V >> W;
  
  	for(int i = 1; i <= n; i++){
      	int v, w, p;
      	cin >> v >> w >> p;
    	for(int j = 0; j <= V; j++)
          	for(int k = 0; k <= W; k++){
            	if(j >= v && k >= w)
                  	f[i][j][k] = max(f[i - 1][j][k], p + f[i - 1][j - v][k - w]);
              	else
                  	f[i][j][k] = f[i - 1][j][k];
            }
    }
  
  	cout << f[n][V][W] << endl;
	
	return 0;
}
