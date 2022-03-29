#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110, MOD = 10007;

int n;
int T[N] = {0, 1};

int fib(int n){
	if(n <= 1) return n;
  
  	if(T[n] == 0)
      	T[n] = (fib(n - 1) + fib(n - 2)) % MOD;
  
  	return T[n];
}

int main() {
  
  	cin >> n;
  	cout << fib(n - 1) << endl;
	
	return 0;
}


