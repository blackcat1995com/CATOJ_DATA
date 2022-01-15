#include <iostream>
#include <cstdio>
#define xx first
#define yy second
using namespace std;

typedef pair<int, int> PII;

const int N = 120;

int n, m;
char g[N][N];
bool book[N][N];

PII q[N * N];

void bfs(int x, int y){
	int hh = 0, tt = -1;
  	q[++tt] = {x, y};
  	book[x][y] = true;
  
  	while(hh <= tt){
    	PII t = q[hh++];
      	for(int i = t.xx - 1; i <= t.xx + 1; i++){
        	for(int j = t.yy - 1; j <= t.yy + 1; j++){
            	if(i == t.xx && j == t.yy) continue;
              	if(i < 0 || i >= n || j < 0 || j >= m) continue;
              	if(g[i][j] == '.' || book[i][j]) continue;
              	q[++tt] = {i, j};
              	book[i][j] = true;
            }
        }
    }
}

int main() {
  
  	cin >> n >> m;
  	for(int i = 0; i < n; i++) cin >> g[i];
  
  	int ans = 0;
  	for(int i = 0; i < n; i++){
    	for(int j = 0; j < m; j++){
        	if(g[i][j] == 'W' && !book[i][j]){
            	bfs(i, j);
              	ans++;
            }
        }
    }
  
  	cout << ans << endl;
	
	return 0;
}
