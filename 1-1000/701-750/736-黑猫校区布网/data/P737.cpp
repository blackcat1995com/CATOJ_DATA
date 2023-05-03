#include <iostream>
using namespace std;

const int N = 1e5 + 10;

int n, k;
int a[N];

bool check(int x) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += a[i] / x;
	return sum >= k;
}

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	
	cin >> n >> k;

	for (int i = 1; i <= n; i++) cin >> a[i];

	int L = 0, R = 1e8 + 10;

	while (L < R) {
		int mid = L + R + 1 >> 1;
		if (check(mid)) L = mid;
		else R = mid - 1;
	}

	cout << L << endl;

	return 0;
}
