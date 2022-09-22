#include <iostream>
#include <cstdio>
using namespace std;

/*
int exgcd(int a, int b, int& x, int& y){
	if(!b){
    	x = 1, y = 0;
      	return a;
    }
  
  	int d = exgcd(b, a % b, x, y);
  	int t = x;	// x'
  	x = y;	// x = y'
  	y = t - a / b * y;
  
  	return d;
}
*/

void exgcd(int a, int b, int& x, int& y){
	if(!b){
    	x = 1, y = 0;
      	return;
    }
  
  	exgcd(b, a % b, y, x);
  	y -= a / b * x;
}

int main() {
  
  	int n;
  	cin >> n;
  
  	while(n--){
    	int a, b, x, y;
      	cin >> a >> b;
      	exgcd(a, b, x, y);
      	cout << x << " " << y << endl;
    }
	
	return 0;
}

