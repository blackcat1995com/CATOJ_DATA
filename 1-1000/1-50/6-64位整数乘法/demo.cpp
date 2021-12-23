#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

LL quickAdd(LL a, LL b, LL p){
	LL res = 0;
  	while(b){
    	if(b & 1) res = (res + a) % p;
      	a = (a + a) % p;
      	b >>= 1;
    }
  
  	return res;
}

int main() {
  
  	LL a, b, p;
  	cin >> a >> b >> p;
  	cout << quickAdd(a, b, p) << endl;
	
	return 0;
}

