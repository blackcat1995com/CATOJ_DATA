#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

int n, p;

LL quickPow(int a, int b){
	LL res = 1 % p;
  	
  	while(b){
    	if(b & 1) res = (LL)res * a % p;
      	a = (LL)a * a % p;
      	b >>= 1;
    }
  	return res;
}
  
int main() {
  
  	cin >> n >> p;
  	for(int i = 1; i <= n; i++)
      	printf("%lld\n", quickPow(i, p - 2));
	
	return 0;
}

