#include <iostream>
#include <cstdio>
using namespace std;

int n, res = 0;

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) res += n / i;
  
  	cout << res << endl;
	
	return 0;
}

