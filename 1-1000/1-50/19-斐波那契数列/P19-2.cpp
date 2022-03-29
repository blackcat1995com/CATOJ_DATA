#include <iostream>
#include <cstdio>
using namespace std;

const int MOD = 10007;

int n;

int fib(int n){
	if(n <= 1) return n;
  	return (fib(n - 1) + fib(n - 2)) % MOD;
}

int main() {
  
  	cin >> n;
  	cout << fib(n - 1) << endl;
	
	return 0;
}


