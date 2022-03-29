#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110, MOD = 10007;

int n;
int a[N] = {0, 1};

int main() {
  
  	cin >> n;
  	for(int i = 2; i <= n - 1; i++)
      	a[i] = (a[i - 1] + a[i - 2]) % MOD;
  
  	cout << a[n - 1] << endl;
	
	return 0;
}


