#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int n, m;
int g[N][N];
bool book[N][N];

int ans = 0;

int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, 1, 0, -1 };

void dfs(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx < 1 || nx > n || ny < 1 || ny > m) continue;
		if (book[nx][ny] || !g[nx][ny]) continue;
		book[nx][ny] = true;
		dfs(nx, ny);
	}
}

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> g[i][j];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (!book[i][j] && g[i][j]) {
				ans++;
				book[i][j] = true;
				dfs(i, j);
			}
		}
	}

	cout << ans << endl;
	return 0;
}
