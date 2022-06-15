#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int W, V, n;
int w[N], v[N], p[N];

int f[N][N][N]; 	// f[i][j][k] 前i种商品可选，重量限制为j，容积限制k，可以得到的最大优惠

int main() {
  
  	cin >> W >> V >> n;
  	for(int i = 1; i <= n; i++) cin >> w[i] >> v[i] >> p[i];
  
  	for(int i = n; i >= 1; i--){
    	for(int j = 1; j <= W; j++)
          	for(int k = 1; k <= V; k++)
              	if(j >= w[i] && k >= v[i])
                  	f[i][j][k] = max(f[i + 1][j][k], p[i] + f[i + 1][j - w[i]][k - v[i]]);
      			else
                  	f[i][j][k] = f[i + 1][j][k];
    }

  
  	cout << f[1][W][V] << endl;
  
  	int j = W, k = V;
  	for(int i = 1; i <= n; i++){
    	if(j >= w[i] && k >= v[i] && f[i][j][k] == p[i] + f[i + 1][j - w[i]][k - v[i]]){
        	cout << i << " ";
          	j -= w[i];
          	k -= v[i];
        }
    }
	return 0;
}

