#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 110, INF = 0x3f3f3f3f;

int n, m;
int d[N][N];

int main() {

	cin >> n >> m;

	memset(d, 0x3f, sizeof d);
	for(int i = 1; i <= n; i++) d[i][i] = 0;

	while(m--){
		int a, b, c;
		cin >> a >> b >> c;
		d[a][b] = d[b][a] = min(d[a][b], c);
	}

	for(int k = 1; k <= n; k++)
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
	
	int ans = 0;

	for(int i = 1; i <= n; i++){
		if(d[1][i] == INF){
			ans = -1;
			break;
		}
		else ans = max(ans, d[1][i]);
	}

	cout << ans << endl;

	return 0;
}

