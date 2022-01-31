#include <iostream>
#include <cmath>
using namespace std;

int n;	// ÎÝ¶¥Êý
double ans = 0.0;
int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		double x, y; 
		int people;
		cin >> x >> y >> people;
		ans += 2 * sqrt(x * x + y * y) / 50 + 1.5 * people;
	}
	cout << ceil(ans);

	return 0;
}
