#include <iostream>
using namespace std;

const int N = 1010;

int n;
int a[N];
int f[N];
int res = 0;

int main() {

	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];

	for (int i = 1; i <= n; i++) {
		f[i] = 1;
		int idx = -1, maxv = -1;
		for (int j = 1; j < i; j++) {
			if (a[i] > a[j] && f[j] > maxv) {
				idx = j;
				maxv = f[j];
			}
		}

		f[i] = f[idx] + 1;
		res = max(res, f[i]);
	}

	cout << res << endl;

	return 0;
}

