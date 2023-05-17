#include <iostream>
using namespace std;

const int N = 6010;

int n, m;
int f[550][N];

int main() {

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		int p, v, s;
		cin >> p >> v >> s;
		for (int j = 0; j <= m; j++) {
			for (int k = 0; k <= s; k++) {
				if (j - k * p < 0) break;							
				f[i][j] = max(f[i][j], k * v + f[i - 1][j - k * p]);
			}
		}
	}

	cout << f[n][m] << endl;

	return 0;
}
