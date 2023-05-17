#include <iostream>
using namespace std;

const int N = 6010;

int n, m;
int f[N];

int main() {

	cin >> n >> m;

	while (n--) {
		int p, v, s;
		cin >> p >> v >> s;
		for (int j = m; j >= p; j--)
			for (int k = 0; k <= s && k * p <= j; k++)
				f[j] = max(f[j], k * v + f[j - k * p]);
	}

	cout << f[m] << endl;

	return 0;
}
