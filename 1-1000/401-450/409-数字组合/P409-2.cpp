#include <iostream>
#include <cstdio>
using namespace std;

int n, m;
int f[25][1010] = {1};

int main() {
  
  	cin >> n >> m;
  	for(int i = 1; i <= n; i++){
    	int w;
      	cin >> w;
      	f[i][0] = 1;
      	for(int j = 1; j <= m; j++)
          	if(j >= w) f[i][j] = f[i - 1][j] + f[i - 1][j - w];
      		else f[i][j] = f[i - 1][j];
    }
  
  	cout << f[n][m] << endl;
	
	return 0;
}
