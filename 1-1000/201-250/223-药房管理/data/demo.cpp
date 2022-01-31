#include <iostream>
using namespace std;

int m, n, cnt = 0;
int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	cin >> m >> n;
	for (int i = 1; i <= n; i++) {
		int temp;
		cin >> temp;
		if (temp > m) {
			cnt++;
		}
		else {
			m -= temp;
		}
	}
	cout << cnt;
	return 0;
}
