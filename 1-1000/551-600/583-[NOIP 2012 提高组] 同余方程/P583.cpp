/*
ax¡Ô1(modb)
ax-1=-by
ax+by=1
*/

#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

void exgcd(int a, int b, int& x, int& y){
	if(!b){
    	x = 1, y = 0;
      	return;
    }
  
  	exgcd(b, a % b, y, x);
  	y -= a / b * x;
}

int main() {
  
  	int a, b, x, y;
  	cin >> a >> b;
  	exgcd(a, b, x, y);
  
  	cout << (x % b + b) % b << endl;
	
	return 0;
}

