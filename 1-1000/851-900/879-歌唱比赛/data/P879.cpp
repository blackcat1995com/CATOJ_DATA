#include <iostream>
#include <cstdio>
using namespace std;

int n, m;
double res = 0.0;

int main() {
	freopen("5.in", "r", stdin);
	freopen("5.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int a = 10010, b = -1, sum = 0;
		for (int j = 1; j <= m; j++) {
			int x;
			cin >> x;
			sum += x;
			a = min(a, x);
			b = max(b, x);
		}

		//cout << a << " " << b << " " << sum << endl;
		double avg = (sum - a - b) * 1.0 / (m - 2);
		res = max(res, avg);
	}

	printf("%.2lf\n", res);

	return 0;
}

