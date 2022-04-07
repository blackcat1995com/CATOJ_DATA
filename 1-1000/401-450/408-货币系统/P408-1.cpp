#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;
int n, m;
LL f[5010] = {1};

int main() {
  
  	cin >> n >> m;
  	for(int i = 1; i <= n; i++){
    	int w;
      	cin >> w;

      	for(int j = w; j <= m; j++)
          	f[j] += f[j - w];
    }
  
  	cout << f[m] << endl;
	
	return 0;
}


