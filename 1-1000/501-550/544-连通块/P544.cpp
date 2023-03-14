#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;
typedef pair<int, int> PII;

int n, m;
int g[N][N];
PII q[N * N];
bool book[N][N];

int ans = 0;

int dx[] = {-1, 0, 1, 0},
    dy[] = {0, 1, 0, -1};

void bfs(int x, int y){
    ans++;
    
    int hh = 0, tt = -1;
    q[++tt] = {x, y};
    book[x][y] = true;
    
    while(hh <= tt){
        PII t = q[hh++];
        
        for(int i = 0; i < 4; i++){
            int nx = t.first  + dx[i], ny = t.second + dy[i];
            
            if(nx >= 1 && nx <= n && ny >= 1 && ny <= m && g[nx][ny] && !book[nx][ny]){
                q[++tt] = {nx, ny};
                book[nx][ny] = true;
            }
        }
    }
}


int main() {

    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> g[i][j];
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++)
            if(g[i][j] && !book[i][j])
                bfs(i, j);
    }
    
    cout << ans << endl;    
	
	return 0;
}
