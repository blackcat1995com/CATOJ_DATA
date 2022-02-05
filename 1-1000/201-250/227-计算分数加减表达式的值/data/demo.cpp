#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int n;
	double sum = 0.0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += (double)pow(-1.0, i - 1) / i;
	}
	printf("%.4lf", sum);
	return 0;
}
