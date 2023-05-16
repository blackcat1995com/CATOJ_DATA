#include <iostream>
using namespace std;

const int N = 1010, K = 110;

int m, n, k = 0;

// w[i][j] 第i组第j个
int w[K][N], v[K][N], s[N];
int f[N];  // f[i][j] 前i组商品可选 容量不超过j

int main() {

	freopen("3.in", "r", stdin);
	freopen("3.out", "w", stdout);
	cin >> m >> n;

	for (int i = 1; i <= n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		s[c]++;
		w[c][s[c]] = a;
		v[c][s[c]] = b;
	}

	for (int i = 1; i < K; i++)
		if (s[i])
			k++;

	//cout << k << endl;
	for (int i = 1; i <= k; i++) {
		for (int j = m; j >= 1; j--) {
			for (int t = 0; t <= s[i]; t++) {
				if (j >= w[i][t])
					f[j] = max(f[j], v[i][t] + f[j - w[i][t]]);
			}
		}
	}

	cout << f[m] << endl;

	return 0;
}
