#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010, MOD = 10007;

int a, b, k, n, m;
int C[N][N];

int quickPow(int a, int b){
	a %= MOD;
  	int res = 1;
  	while(b){
    	if(b & 1) res = res * a % MOD;
      	a = a * a % MOD;
      	b >>= 1;
    }
  
  	return res;
}

int main() {
  
  	cin >> a >> b >> k >> n >> m;
  	
  	for(int i = 0; i <= k; i++)
      	for(int j = 0; j <= i; j++)
          	if(!j) C[i][j] = 1;
  			else C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % MOD;
  
  	cout << C[k][n] * quickPow(a, n) % MOD * quickPow(b, m) % MOD << endl;
	
	return 0;
}

