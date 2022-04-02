#include <iostream>
#include <cstdio>
using namespace std;

const int N = 50;

int T[N] = {0, 1, 1};

int fib(int n){
	if(n <= 2) return 1;
  	if(!T[n]) T[n] = fib(n - 1) + fib(n - 2);
  	return T[n];
}

int main() {
  
  	int n;
  	cin >> n;
  	cout << fib(n) << endl;
	
	return 0;
}


