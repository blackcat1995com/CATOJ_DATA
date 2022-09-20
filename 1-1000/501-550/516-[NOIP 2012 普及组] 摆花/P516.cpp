#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110, MOD = 1e6 + 7;
int n, m;
int f[N] = {1};

int main() {

  	cin >> n >> m;
  	
  	while(n--){
    	int x;
      	cin >> x;
      	for(int j = m; j >= 1; j--)
          	for(int k = 1; k <= x && k <= j; k++)
              	f[j] = (f[j] + f[j - k]) % MOD;
    }
  
  	cout << f[m] << endl;
  
	return 0;
}

