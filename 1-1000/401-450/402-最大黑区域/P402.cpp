#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int n, m;
int g[N][N];
bool book[N][N];

int ans = 0, cnt = 0;

int dx[] = {-1, 0, 1, 0},
	dy[] = {0, 1, 0, -1};

void dfs(int x, int y){
	cnt++;
  	g[x][y] = 0;
  	for(int i = 0; i < 4; i++){
    	int nx = x + dx[i], ny = y + dy[i];
      	if(nx < 1 || nx > n || ny < 1 || ny > m) continue;
      	if(!g[nx][ny]) continue;
      	dfs(nx, ny);
    }
}

int main() {
  
  	cin >> n >> m;
  	for(int i = 1; i <= n; i++)
      	for(int j = 1; j <= m; j++)
          	cin >> g[i][j];
  
  	for(int i = 1; i <= n; i++)
      	for(int j = 1; j <= m; j++){
        	if(g[i][j]){
            	cnt = 0;
              	dfs(i, j);
              	ans = max(ans, cnt);
            }
        }
  
  	cout << ans << endl;
	
	return 0;
}


