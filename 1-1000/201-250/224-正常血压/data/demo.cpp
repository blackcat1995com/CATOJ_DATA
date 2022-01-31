#include <iostream>
using namespace std;

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int n, a, b, cnt = 0, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		if (a >= 90 && a <= 140 && b >= 60 && b <= 90)
			cnt++;
		else {
			if (cnt > sum)
				sum = cnt;
			cnt = 0;
		}
	}
	int imax = cnt > sum ? cnt : sum;
	cout << imax;
	return 0;
}
