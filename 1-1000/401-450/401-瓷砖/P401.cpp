#include <iostream>
#include <cstdio>
using namespace std;

const int N = 55;

int h, w;
int g[N][N];
int start_x, start_y;
bool book[N][N];

int ans = 0;

int dx[] = {-1, 0, 1, 0},
	dy[] = {0, 1, 0, -1};

void dfs(int x, int y){
	ans++;
  	for(int i = 0; i < 4; i++){
    	int nx = x + dx[i], ny = y + dy[i];
      	if(nx < 1 || nx > w || ny < 1 || ny > h) continue;
      	if(g[nx][ny] || book[nx][ny]) continue;
      	book[nx][ny] = true;
      	dfs(nx, ny);
    }
}

int main() {
  
  	cin >> h >> w;
  	for(int i = 1; i <= w; i++)
      	for(int j = 1; j <= h; j++){
        	char ch;
          	cin >> ch;
          	if(ch == '#') g[i][j] = 1;
          	if(ch == '@') {
            	g[i][j] = 2;
              	start_x = i;
              	start_y = j;
            }
        }
  
  	book[start_x][start_y] = true;
  	dfs(start_x, start_y);
  
  	cout << ans << endl;
	
	return 0;
}


