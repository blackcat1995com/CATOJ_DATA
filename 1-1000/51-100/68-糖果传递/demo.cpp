#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long LL;

const int N = 1e6 + 10;

int n;
int a[N], c[N];
LL sum = 0, ans = 0;

int main() {

	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		sum += a[i];
	}

	int ave = sum / n;

	for(int i = 2; i <=n; i++)
		c[i] = c[i - 1] + a[i - 1] - ave;

	sort(c + 1, c + n + 1);

	for(int i = 1; i <= n; i++)
		ans += abs(c[n + 1 >> 1] - c[i]);

	printf("%lld\n", ans);
	
	return 0;
}

