#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int n, V, W;
int f[N][N];

int main() {
  
  	cin >> n >> V >> W;
  
  	for(int i = 1; i <= n; i++){
      	int v, w, p;
      	cin >> v >> w >> p;
    	for(int j = V; j >= v; j--)
          	for(int k = W; k >= w; k--)
              	f[j][k] = max(f[j][k], p + f[j - v][k - w]);
    }
  
  	cout << f[V][W] << endl;
	
	return 0;
}
