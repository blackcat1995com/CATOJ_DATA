#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010;

int n, m;
int f[N];

int main() {
 
	cin >> n >> m;

	while (m--) {
		int p, k;
		cin >> p >> k;
		for (int i = p; i <= n; i++)
			f[i] = max(f[i], f[i - p] + k);
	}

	cout << f[n] << endl;

	return 0;
}
