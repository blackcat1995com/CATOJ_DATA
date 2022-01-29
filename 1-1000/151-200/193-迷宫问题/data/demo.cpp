#include <iostream>
#include <cstdio>
#include <cstring>
#define xx first
#define yy second
using namespace std;

typedef pair<int, int> PII;

const int N = 1010;

int n;
int g[N][N];
PII q[N * N];
PII pre[N][N];

void bfs(int x, int y){
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
    
    int hh = 0, tt = -1;
    q[++tt] = {x, y};
    
    memset(pre, -1, sizeof pre);
    
    pre[x][y] = {0, 0};
    
    while(hh <= tt){
        PII t = q[hh++];
        for(int i = 0; i < 4; i++){
            int nx = t.xx + dx[i], ny = t.yy + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if(g[nx][ny] || ~pre[nx][ny].xx) continue;
            
            q[++tt] = {nx, ny};
            pre[nx][ny] = t;
        }
    }
}

int main() {
    
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> g[i][j];
            
    bfs(n - 1, n - 1);
    
    PII ed = {0, 0};
    while(true){
        printf("%d %d\n", ed.xx, ed.yy);
        if(ed.xx == n - 1 && ed.yy == n - 1) break;
        ed = pre[ed.xx][ed.yy];
    }
	
	return 0;
}


