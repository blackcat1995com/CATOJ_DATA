#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 15;

int n, m;
int cnt;
bool book[N][N];

int dx[] = {1, -1, -2, -2, -1, 1, 2, 2},
	dy[] = {2, 2, 1, -1, -2, -2, -1, 1};

// 检测所有点是否都被访问
bool check(){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(!book[i][j])
                return false;
    
    return true;
}
void dfs(int x, int y){
	if(check()){
        cnt++;
        return;
    }
    
    for(int i = 0; i < 8; i++){
        int nx = x + dx[i], ny = y + dy[i];
        if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if(book[nx][ny]) continue;
        
        book[nx][ny] = true;
        dfs(nx, ny);
        book[nx][ny] = false;
    }
}

int main() {

	int T;
    cin >> T;
    
    while(T--){
        int x, y;	// 起始点
        cin >> n >> m >> x >> y;
        cnt = 0;
        memset(book, 0, sizeof book);
        book[x][y] = true;
        dfs(x, y);
        cout << cnt << endl;
    }
	return 0;
}
