#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std ;

typedef pair<int,int> PII ;
const int N = 50 ;

int g[N][N] ;
int dist[N][N] ;
int dx[] = {0,-1,0,1}, dy[] = {-1,0,1,0} ;
int n,m ;

int bfs(int x,int y){
    dist[x][y] = 0 ;
    queue<PII> q ;
    q.push({x,y}) ;

    int cnt = 0 ;
    while(q.size()){
        PII ele = q.front() ;
        q.pop() ;
        cnt ++ ;
        int x = ele.first, y = ele.second ;
        for(int i=0;i<4;i++){
            if(!(g[x][y]>>i&1)){
                int a = x + dx[i],b = y + dy[i] ;
                if(dist[a][b] == -1){
                    dist[a][b] = dist[x][y] + 1 ;
                    q.push({a,b}) ;
                }
            }
        }
    }
    return cnt ;
}

int main(){
	
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
    scanf("%d%d",&n,&m) ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&g[i][j]) ;
        }
    }

    int res = 0,maxv = 0 ;
    memset(dist,-1,sizeof dist) ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(dist[i][j] == -1){
                res ++ ;
                maxv = max(maxv,bfs(i,j)) ;
            }
        }
    }
    printf("%d\n",res) ;
    printf("%d\n",maxv) ;

    return 0 ;
}
