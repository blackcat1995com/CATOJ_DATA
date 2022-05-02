#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

LL n, L, R;

int main() {
  
  	cin >> n >> L >> R;
  
  	if(L / n < R / n) cout << n - 1 << endl;
  	else cout << R % n << endl;

	return 0;
}

