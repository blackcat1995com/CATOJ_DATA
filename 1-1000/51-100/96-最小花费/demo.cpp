#include <iostream>
#include <cstdio>
using namespace std;

const int N = 2010;

int n, m, S, T;

double g[N][N];
double dis[N];
int book[N];

void dijkstra(){
	dis[S] = 1;

	for(int i = 1; i <= n; i++){
		int u = -1;
		for(int j = 1; j <= n; j++){
			if(!book[j] && (u == -1 || dis[u] < dis[j]))
				u = j;
		}

		book[u] = true;

		for(int j = 1; j <= n; j++)
			dis[j] = max(dis[j], dis[u] * g[u][j]);
	}
}

int main() {

	cin >> n >> m;

	while(m--){
		int a, b, c;
		cin >> a >> b >> c;
		double z = (100 - c) * 1.0 / 100;
		g[a][b] = g[b][a] = max(g[a][b], z);
	}

	cin >> S >> T;
	
	dijkstra();

	printf("%.8lf\n", 100 / dis[T]);

	return 0;
}

