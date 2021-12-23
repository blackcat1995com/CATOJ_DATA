#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

int a, b, p;

int quickPow(int a, int b){
	int res = 1 % p;
  	while(b){
    	if(b & 1) res = (LL)res * a % p;
      	a = (LL)a * a % p;
      	b >>= 1;
    }
  
  	return res;
}

int main() {
  
  	cin >> a >> b >> p;
  
  	cout << quickPow(a, b) << endl;
	
	return 0;
}
