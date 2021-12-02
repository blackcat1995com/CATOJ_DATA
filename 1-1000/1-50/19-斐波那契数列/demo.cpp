#include <iostream>
using namespace std;

const int MOD = 10007;

int a[1001] = { 0, 1 };

int fib(int n){
	if (n == 0) return 0;
	if (n == 1) return 1;

	if (a[n] == 0)
		a[n] = (fib(n - 1) + fib(n - 2)) % MOD; 

	return a[n];
}

int main() {
	
	int n;
	cin >> n;
	
	cout << fib(n - 1) << endl;
	return 0;
}


