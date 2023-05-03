#include <iostream>
using namespace std;

const int N = 1e5 + 10;

int T;
int a[N];
int f[N];

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	cin >> T;

	while (T--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) cin >> a[i];

		for (int i = 1; i <= n; i++) 
			f[i] = max(f[i - 1], f[i - 2] + a[i]);

		cout << f[n] << endl;
	}

	return 0;
}
