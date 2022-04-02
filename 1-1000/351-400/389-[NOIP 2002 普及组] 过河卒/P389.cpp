#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;
const int N = 25;

int n, m, x, y;
LL f[N][N];
bool book[N][N];
int dx[] = {0, -1, -2, -2, -1, 1, 2, 2, 1},
    dy[] = {0, 2, 1, -1, -2, -2, -1, 1, 2};

int main() {

	cin >> n >> m >> x >> y;
	n++, m++, x++, y++;

	for(int i = 0; i <= 8; i++){
		int nx = x + dx[i], ny = y + dy[i];
		if(nx < 1 || nx > n || ny < 1 || ny > m) continue;
		book[nx][ny] = true;
	}

	f[1][1] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++)
			if((i != 1 || j != 1) && !book[i][j])
				f[i][j] = f[i - 1][j] + f[i][j - 1];
	}
	
	cout << f[n][m] << endl;
	return 0;
}


