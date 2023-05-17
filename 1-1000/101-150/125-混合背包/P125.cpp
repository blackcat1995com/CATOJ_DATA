#include <iostream>
using namespace std;

const int N = 210;

int m, n;
int f[N];

int main() {

	cin >> m >> n;

	while (n--) {
		int w, v, s;
		cin >> w >> v >> s;
		if (s == 0) {
			for (int j = w; j <= m; j++)
				f[j] = max(f[j], v + f[j - w]);
		}
		else {
			for (int j = m; j >= 1; j--) {
				for (int k = 0; k <= s && k * w <= j; k++)
					f[j] = max(f[j], k * v + f[j - k * w]);
			}
		}
	}

	cout << f[m] << endl;

	return 0;
}

