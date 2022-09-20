#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e4 + 10, M = 110, MOD = 20123;

typedef pair<int, int> PII;

int n, m;
PII g[N][M];

int st, ans = 0;

int main() {

	cin >> n >> m;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> g[i][j].first >> g[i][j].second;

	cin >> st;

	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = 0; j < m; j++) sum += g[i][j].first;
		int t = g[i][st].second % sum;
		if(!t) t = sum;
		ans = (ans + g[i][st].second) % MOD;
		while(t){
			t -= g[i][st].first;
			st = (st + 1) % m;
		}
		st = (st + m - 1) % m;
	}
	
	cout << ans << endl;
	
	return 0;
}

