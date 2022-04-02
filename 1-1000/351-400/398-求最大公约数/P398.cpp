// Х·ЧЄПаіэ·Ё
#include <iostream>
#include <cstdio>
using namespace std;

int gcd(int a, int b){
	return b ? gcd(b, a % b) : a;
}

int main() {

  	int a, b;
  	cin >> a >> b;
  	cout << "gcd=" << gcd(a, b) << endl;
	
	return 0;
}


