#include <iostream>
#include <cstdio>

using namespace std;

int t, a[101][101];
int n, m;
int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> t;
			a[j][i] = t;
		}
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

/*
2 3
1 2 3
4 5 6

*/
