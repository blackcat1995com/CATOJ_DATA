#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int n, m;
int g[N][N];

int main() {
	freopen("5.in", "r", stdin);
	freopen("5.out", "w", stdout);
	cin >> n >> m;

	while (m--) {
		int a, b;
		cin >> a >> b;
		g[a][b] = g[b][a] = 1;
	}

	int q;
	cin >> q;

	while (q--) {
		int x;
		cin >> x;
		int sum = 0;
		for (int i = 1; i <= n; i++) 
			sum += g[x][i];
		
		cout << sum << endl;
	}
	return 0;
}

