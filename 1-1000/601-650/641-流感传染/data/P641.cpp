#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#define For(i, a, b) for(int i=(a); i<=(b); i++)
using namespace std;


int n, m;
int a[101][101];
int ans = 0;
int np[4][2] = {
	{0,1},
	{1,0},
	{0,-1},
	{-1,0}
};
void infect(int x, int y);
int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	
	cin >> n;
	For(i, 1, n) {
		For(j, 1, n) {
			char ch;
			cin >> ch;
			// 0空房间  1健康  2被感染  3当天被感染的人
			if (ch == '.')
				a[i][j] = 1;
			if (ch == '@')
				a[i][j] = 2;
		}
	}

	/*For(i, 1, n) {
		For(j, 1, n) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}*/
	
	cin >> m;
	For(k, 2, m) {
		For(i, 1, n) {
			For(j, 1, n) {
				if (a[i][j] == 2)
					infect(i, j);
			}
		}

		For(i, 1, n) {
			For(j, 1, n) {
				if (a[i][j] == 3)
					a[i][j] = 2;
			}
		}
	}

	For(i, 1, n) {
		For(j, 1, n) {
			if (a[i][j] == 2)
				ans++;
		}
	}

	cout << ans << endl;
	return 0;
}

void infect(int x, int y) {
	For(i, 0, 3) {
		int nx = x + np[i][0];
		int ny = y + np[i][1];
		if (nx >= 1 && nx <= n && ny >= 1 && ny <= n && a[nx][ny] == 1)
			a[nx][ny] = 3;
	}
}

/*
5
....#
.#.@.
.#@..
#....
.....
4
*/
