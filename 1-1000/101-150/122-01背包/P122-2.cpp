#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int M = 210;

int m, n;
int f[M], g[M];

int main() {
  
  	cin >> m >> n;
  
  	for(int i = 1; i <= n; i++){
    	int w, v;
      	cin >> w >> v;
      	memcpy(g, f, sizeof f);
      	for(int j = w; j <= m; j++)
          	f[j] = max(f[j], v + g[j - w]);
    }
	
  	cout << f[m] << endl;
  
	return 0;
}
