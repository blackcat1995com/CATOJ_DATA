#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

struct Node{
    int x;
    int y;
};

int np[4][2] = {
        {0, 1},
        {1, 0},
        {0, -1},
        {-1, 0}
};

char s[101];
int a[101][101];
bool book[101][101];
int n, m;
int ans = 0;

void bfs(int x, int y);
int main() {
	// freopen("xxx.in", "r", stdin);
	// freopen("xxx.out", "w", stdout);
    scanf("%d%d\n", &n, &m);

    for(int i=0;i<n;i++){
        cin.getline(s, 101);
        for(int j=0;j<m;j++){
            if(s[j]!='0')
                a[i][j] = 1;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1 && !book[i][j])
                bfs(i, j);
        }
    }

    cout << ans << endl;
	// fclose(stdin);
	// fclose(stdout);

	return 0;
}


void bfs(int x, int y){
    queue<Node> que;
    Node startnode;
    startnode.x = x;
    startnode.y = y;
    book[x][y] = true;
    que.push(startnode);
    ans++;
    while(!que.empty()){
        for(int i=0;i<4;i++){
            int nx = que.front().x + np[i][0];
            int ny = que.front().y + np[i][1];

            if(nx>=0 && nx<n && ny>=0 && ny<m && a[nx][ny]==1 && !book[nx][ny]){
                book[nx][ny] = true;
                Node newnode;
                newnode.x = nx;
                newnode.y = ny;
                que.push(newnode);
            }
        }
        que.pop();
    }
    return;
}
