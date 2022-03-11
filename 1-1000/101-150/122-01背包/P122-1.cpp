#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int M = 210;

int m, n;
int f[2][M];

int main() {
  
  	cin >> m >> n;
  
  	for(int i = 1; i <= n; i++){
    	int w, v;
      	cin >> w >> v;	
      	for(int j = 0; j <= m; j++){
          	f[i & 1][j] = f[(i - 1) & 1][j];
      		if(j >= w)
          		f[i & 1][j] = max(f[i & 1][j], v + f[(i - 1) & 1][j - w]);
        }
    }
	
  	cout << f[n & 1][m] << endl;
  
	return 0;
}


