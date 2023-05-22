#include <iostream>
using namespace std;

const int N = 1e6 + 10;

int n;
int a[N];
int x;

int main() {

	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];

	cin >> x;

	int L = 1, R = n;

	while (L < R) {
		int mid = L + R >> 1;
		if (a[mid] >= x) R = mid;
		else L = mid + 1;
	}

	if (a[L] == x) cout << L << endl;
	else cout << -1 << endl;

	return 0;
}

