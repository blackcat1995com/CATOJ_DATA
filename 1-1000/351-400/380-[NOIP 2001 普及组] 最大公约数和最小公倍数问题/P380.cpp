#include <iostream>
#include <cstdio>
using namespace std;

int gcd(int a, int b){
	return b ? gcd(b, a % b) : a;
}

int main() {

	int x, y, ans = 0;
	cin >> x >> y;
  
	for(int i = x; i <= y; i += x){
		int j = x * y / i;
		int xx = gcd(i, j);
		int yy = i / xx * j;
		if(xx == x && yy == y) ans++;
	}

	cout << ans << endl;
	
	return 0;
}


