#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	double x1, y1, x2, y2, ans;
	cin >> x1 >> y1 >> x2 >> y2;
	ans = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	printf("%.3lf", ans);
	return 0;
}
