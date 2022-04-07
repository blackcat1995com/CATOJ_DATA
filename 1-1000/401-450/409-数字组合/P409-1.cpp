#include <iostream>
#include <cstdio>
using namespace std;

int n, m;
int f[1010] = {1};

int main() {
  
  	cin >> n >> m;
  	for(int i = 1; i <= n; i++){
    	int w;
      	cin >> w;
      	for(int j = m; j >= w; j--)
      		f[j] += f[j - w];
    }
  
  	cout << f[m] << endl;
	
	return 0;
}


