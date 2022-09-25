/*
ax¡Ô1(modb)
ax-1=-by
ax+by=1
*/

#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

LL exgcd(LL a, LL b, LL& x, LL& y){
	if(!b){
    	x = 1, y = 0;
      	return a;
    }
  
  	LL d = exgcd(b, a % b, y, x);
  	y -= a / b * x;
  	return d;
}

int main() {
  
  	LL T, a, b, x, y;
  	cin >> T;
  
  	while(T--){
    	cin >> a >> b;
  		LL d = exgcd(a, b, x, y);
  		if(d != 1) puts("-1");
  		else cout << (x % b + b) % b << endl;
    }
  	
	
	return 0;
}

