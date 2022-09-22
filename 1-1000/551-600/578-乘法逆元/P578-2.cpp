#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;
const int N = 20000528;

LL n, p, inv[N];

int main() {
	
	cin >> n >> p;
	inv[1] = 1;
	
	puts("1");
	
	for(int i = 2; i <= n; i++){
		inv[i] = p - p / i * inv[p % i] % p;
		printf("%lld\n", inv[i]);
	}
		
	return 0;
}

