#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int n, m;
int a[N][N];

int main() {

	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin >> a[i][j];

	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++)
			cout << a[n + 1 - j][i] << " ";
		puts("");
	}
	
	return 0;
}


