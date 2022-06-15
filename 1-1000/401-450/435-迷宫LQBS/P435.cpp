#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 110;

int n, m;
char g[N][N];

bool bookS[N][N], book[N][N];

int cnt, ans = 0;

bool flag = false;

int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};

void dfs(int x, int y){
	if(g[x][y] == 'S' && !bookS[x][y]) cnt++;
  
  	bookS[x][y] = true;
  
  	for(int i = 0; i < 4; i++){
    	int nx = x + dx[i], ny = y + dy[i];
      	if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      	if((g[x][y] == 'L' && g[nx][ny] == 'Q') ||
           (g[x][y] == 'Q' && g[nx][ny] == 'B') ||
           (g[x][y] == 'B' && g[nx][ny] == 'S') ||
           (g[x][y] == 'S' && g[nx][ny] == 'L')){
        		if(book[nx][ny]){
            		flag = true;
                  	return;
                }
          		book[nx][ny] = true;
          		dfs(nx, ny);
          		book[nx][ny] = false;
        }	
    }
}

int main() {
  
  	cin >> n >> m;
  
  	for(int i = 0; i < n; i++) cin >> g[i];
  	
  	for(int i = 0;  i < n; i++){
    	for(int j = 0; j < m; j++){
        	if(g[i][j] == 'L'){
            	memset(book, 0, sizeof book);
              	cnt = 0;
              	book[i][j] = true;
              	dfs(i, j);
              	if(flag){
                	puts("-1");
                  	return 0;
                }
              	ans += cnt;
            }
        }
    }
  
  	cout << ans << endl;

	return 0;
}

