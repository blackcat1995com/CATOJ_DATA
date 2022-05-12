#include <iostream>
#include <cstdio>
using namespace std;

const int N = 55;

int n, m;
int a[N][N];
bool book[N][N];
int st_x, st_y;

int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, 1, 0, -1 };

int ans = 0;

void dfs(int x, int y) {
	
	ans++;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx < 1 || nx > n || ny < 1 || ny > m) continue;
		if (book[nx][ny] || a[nx][ny] == 2) continue;
		book[nx][ny] = true;
		dfs(nx, ny);
	}
}
int main() {
 
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
			if (a[i][j] == 6) {
				st_x = i;
				st_y = j;
			}
		}

	book[st_x][st_y] = true;
	dfs(st_x, st_y);

	cout << ans << endl;
	return 0;
}
