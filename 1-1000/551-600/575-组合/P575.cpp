#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

int n, p;

int quickPow(int a, int b){
  	int res = 1;
  	while(b){
    	if(b & 1) res = (LL)res * a % p;
      	a = (LL)a * a % p;
      	b >>= 1;
    }
  
  	return res;
}

int C(int a, int b){
	int res = 1;
  	for(int i = 1, j = a; i <= b; i++, j--){
    	res = (LL) res * j % p;
      	res = (LL) res * quickPow(i, p - 2) % p;
    }
  
  	return res;
}

int lucas(LL a, LL b){
	if(a < p && b < p) return C(a, b);
  	return (LL)C(a % p, b % p) * lucas(a / p, b / p);
}

int main() {
  
  	cin >> n;
  	while(n--){
    	LL a, b;
      	cin >> a >> b >> p;
      	cout << lucas(a, b) << endl;
    }
	
	return 0;
}

