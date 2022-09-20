#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

const int N = 110, INF = 0x3f3f3f3f;

int n, K, m, S, T;

int c[N], f[N][N];
int g[N][N], d[N][N];

int ans = INF;

vector<int> path;

void dfs(int u, int step){
	if(step + d[S][u] >= ans) return;

	if(u == S){
		ans = step;
		return;
	}

	for(int i = 1; i <= n; i++){
		if(g[i][u] == INF) continue;
		bool flag = true;
		for(int j = 0; j < path.size(); j++){
			if(f[path[j]][c[i]]){
				flag = false;
				break;
			}
		}
		if(flag){
			path.push_back(c[i]);
			dfs(i, step + g[i][u]);
			path.pop_back();
		}
	}
}

int main() {

	cin >> n >> K >> m >> S >> T;

	for(int i = 1; i <= n; i++) cin >> c[i];

	for(int i = 1; i <= K; i++){
		for(int j = 1; j <= K; j++){
			cin >> f[i][j];
			if(i == j) f[i][j] = 1;
		}
	}

	memset(g, 0x3f, sizeof g);
	for(int i = 1; i <= n; i++) g[i][i] = 0;

	while(m--){
		int a, b, c;
		cin >> a >> b >> c;
		g[a][b] = g[b][a] = min(g[a][b], c);
	}

	memcpy(d, g, sizeof d);

	for(int k = 1; k <= n; k++)
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

	path.push_back(c[T]);

	dfs(T, 0);

	if(ans == INF) ans = -1;
	cout << ans << endl;
	
	return 0;
}

