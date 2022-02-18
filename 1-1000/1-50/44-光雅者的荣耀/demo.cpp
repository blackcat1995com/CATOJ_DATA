#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

const int N = 1e6 + 10;
LL n, k;
LL sum[N];
LL cnt = 0;

int main() {

	scanf("%lld%lld", &n, &k);

	for(int i = 1; i <= n - 1; i++){
		LL x;
		scanf("%lld", &x);
		sum[i] = sum[i-1] + x;
		cnt += x;
	}

	LL maxv = 0;
	for(int i = n - 1; i >= k; i--)
		maxv = max(maxv, sum[i] - sum[i-k]);
	
	printf("%lld\n", cnt - maxv);
	
	return 0;
}

