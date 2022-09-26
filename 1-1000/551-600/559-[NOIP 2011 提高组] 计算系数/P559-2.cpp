#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010, MOD = 10007;

int a, b, k, n, m;
int fact[N] = {1}, invfact[N] = {1};

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
  	
  	for(int i = 1; i <= k; i++){
    	fact[i] = fact[i - 1] * i % MOD;
      	invfact[i] = invfact[i - 1] * quickPow(i, MOD - 2) % MOD;
    }
  
  	int t = fact[k] * invfact[n] % MOD * invfact[k - n] % MOD;
  
  	cout << t * quickPow(a, n) % MOD * quickPow(b, m) % MOD << endl;
	
	return 0;
}
