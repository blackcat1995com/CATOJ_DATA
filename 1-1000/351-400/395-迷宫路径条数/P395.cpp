#include <iostream>
#include <cstdio>
using namespace std;

const int N = 15;

int n;
int g[N][N];
bool book[N][N];
int ans = 0;

int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1},
	dy[] = {0, 1, 1, 1, 0, -1, -1, -1};

void dfs(int x, int y){
	if(x == 1 && y == n){
    	ans++;
      	return;
    }
  
  	for(int i = 0; i < 8; i++){
    	int nx = x + dx[i], ny = y + dy[i];
      	if(nx < 1 || nx > n || ny < 1 || ny > n) continue;
      	if(g[nx][ny] || book[nx][ny]) continue;
      	book[nx][ny] = true;
      	dfs(nx, ny);
      	book[nx][ny] = false;
    }
}

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++)
      	for(int j = 1; j <= n; j++)
          	cin >> g[i][j];
  
  	book[1][1] = true;
  	dfs(1, 1);
  
  	cout << ans << endl;
	
	return 0;
}


