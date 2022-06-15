#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 110;

int T, n;
char g[N][N];
bool book[N][N];
bool flag;
int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, 1, 0, -1 };

int st_x, st_y, ed_x, ed_y;
void dfs(int x, int y) {
	if (x == ed_x && y == ed_y) {
		flag = true;
		return;
	}

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx < 0 || nx >= n || ny < 0 || ny >= n || g[nx][ny] == '#' || book[nx][ny]) continue;
		book[nx][ny] = true;
		dfs(nx, ny);
	}
}

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);

	cin >> T;

	while (T--) {
		memset(book, 0, sizeof book);
		memset(g, 0, sizeof g);
		cin >> n;
		for (int i = 0; i < n; i++) cin >> g[i];

		cin >> st_x >> st_y >> ed_x >> ed_y;
		flag = false;

		if (g[st_x][st_y] == '#' || g[ed_x][ed_y] == '#') {
			puts("NO");
			continue;
		}

		book[st_x][st_y] = true;
		dfs(st_x, st_y);

		if (flag) puts("YES");
		else puts("NO");
	}

	return 0;
}
