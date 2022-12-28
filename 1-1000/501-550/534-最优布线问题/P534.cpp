#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 110;

int n;
int g[N][N];
int dis[N];
bool book[N];

int prim(){
    int res = 0;
    memset(dis, 0x3f, sizeof dis);
    dis[1] = 0;
    
    for(int i = 1; i <= n; i++){
        int u = -1;
        for(int j = 1; j <= n; j++){
            if(!book[j] && (u == -1 || dis[u] > dis[j]))
                u = j;
        }
        
        res += dis[u];
        book[u] = true;
        
        for(int j = 1; j <= n; j++) 
            if(!book[j])
            	dis[j] = min(dis[j], g[u][j]);
    }
    
    return res;
}

int main() {

    cin >> n;
    
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> g[i][j];
    
    cout << prim() << endl;

	return 0;
}



