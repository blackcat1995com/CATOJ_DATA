#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;
int n, m;
LL f[110][5010] = {1};

int main() {
  
  	cin >> n >> m;
  	for(int i = 1; i <= n; i++){
    	int w;
      	cin >> w;
      	f[i][0] = 1;
      	for(int j = 1; j <= m; j++)
          	if(j >= w) f[i][j] = f[i - 1][j] + f[i][j - w];
      		else f[i][j] = f[i - 1][j];
    }
  
  	cout << f[n][m] << endl;
	
	return 0;
}
