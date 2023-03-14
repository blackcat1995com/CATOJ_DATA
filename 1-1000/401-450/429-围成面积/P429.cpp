#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

typedef pair<int, int> PII;

const int N = 15;

int g[N][N];
PII q[N * N];
bool book[N][N];

int dx[] = {-1, 0, 1, 0},
    dy[] = {0, 1, 0, -1};


int ans;

void bfs(int x, int y) {
	int hh = 0, tt = -1;

	q[++tt] = {x, y};
    g[x][y] = 1;
    
	while (hh <= tt) {
        
        PII t = q[hh++];
        ans++;
		for (int i = 0; i < 4; i++) {

			int nx = t.first + dx[i], ny = t.second + dy[i];

			if (nx >= 1 && nx <= 10 && ny >= 1 && ny <= 10 && g[nx][ny] == 0) {
				g[nx][ny] = 1;
				q[++tt] = {nx, ny};
			}
		}
		
	}
}
int main() {

	for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++)
			cin >> g[i][j];


	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if ((i == 1 || i == 10 || j == 1 || j == 10) && g[i][j] == 0)
				bfs(i, j);
		}
	}

	ans = 0;
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (g[i][j] == 0) {
				bfs(i, j);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
