#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

int n, k;

LL S(int n, int k){
	if(k == 0 || n < k) return 0;
  	if(n == k || k == 1) return 1;
  	return S(n  - 1, k - 1) + k * S(n - 1, k);
}

int main() {
  
  	cin >> n >> k;
  	cout << S(n, k) << endl;

	return 0;
}



