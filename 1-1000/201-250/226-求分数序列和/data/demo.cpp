#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int n, q = 2, p = 1;
	double ans = 0.0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		ans += q * 1.0 / p;
		int temp = q;
		q = q + p;
		p = temp;
	}
	printf("%.4lf", ans);
	return 0;
}
