#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int x, n;
	cin >> x >> n;
	double ans = x * pow(1.001, n);
	printf("%.4lf", ans);
	return 0;
}
