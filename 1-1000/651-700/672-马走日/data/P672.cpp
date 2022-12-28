#include <iostream>
#include <cstdio>
#include <cstring> 

using namespace std;

int map[11][11], n, m, x, y, t, cnt;
int direction[8][2] = { {-2,1},{-2,-1},{-1,2},{-1,-2},{2,1},{2,-1},{1,2},{1,-2} };
void dfs(int x, int y, int step);
int main() {
	
	freopen("3.in", "r", stdin);
	freopen("3.out", "w", stdout);
	
	cin >> t;	// 代表数据组数
	while (t--) {
		cnt = 0;
		cin >> n >> m >> x >> y;
		memset(map, 0, sizeof(map));
		map[x][y] = 1;
		dfs(x, y, 1);
		cout << cnt << endl;
	}
	return 0;
}

void dfs(int x, int y, int step) {
	if (step == n * m) {
		cnt++;
		return;
	}
	for (int i = 0; i < 8; i++) {
		int nx = x + direction[i][0];
		int ny = y + direction[i][1];
		if (nx >= 0 && nx < n && ny >= 0 && ny < m && map[nx][ny] == 0) {
			map[nx][ny] = 1;
			dfs(nx, ny, step + 1);
			map[nx][ny] = 0;
		}
	}
}
