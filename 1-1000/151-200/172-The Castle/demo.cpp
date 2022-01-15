#include <iostream>
#include <cstdio>
#define xx first
#define yy second
using namespace std;

typedef pair<int, int> PII;

const int N = 55;
int n, m;
int g[N][N];
PII q[N * N];
bool book[N][N];

int bfs(int x, int y){
	int dx[4] = {0, -1, 0, 1}, dy[4] = {-1, 0, 1, 0};
  	int hh = 0, tt = -1;
  	
  	int area = 0;
  	q[++tt] = {x, y};
  	book[x][y] = true;
  
  	while(hh <= tt){
    	PII t = q[hh++];
      	area++;
      
      	for(int i = 0; i < 4; i++){
        	int nx = t.xx + dx[i], ny = t.yy + dy[i];
          	if(nx < 1 || nx > n || ny < 1 || ny > m) continue;
          	if(book[nx][ny] || g[t.xx][t.yy] >> i & 1) continue;
          	q[++tt] = {nx, ny};
          	book[nx][ny] = true;
        }
    }
  
  	return area;
}

int main() {
  
  	cin >> n >> m;
  
  	for(int i = 1; i <= n; i++)
      	for(int j = 1; j <= m; j++)
          	cin >> g[i][j];
    
  	int cnt = 0, area = 0;
  	for(int i = 1; i <= n; i++)
      	for(int j = 1; j <= m; j++)
          	if(!book[i][j]){
            	area = max(area, bfs(i, j));
              	cnt++;
            }
	
  	cout << cnt << endl << area << endl;
    
	return 0;
}


