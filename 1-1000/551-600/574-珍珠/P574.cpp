#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int n, m;
bool g[N][N];

int res = 0;

int main() {

	cin >> n >> m;
    while(m--){
        int a, b;
        cin >> a >> b;
        g[a][b] = true;
    }
    
    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                g[i][j] = g[i][j] || g[i][k] && g[k][j];
    
    for(int i = 1; i <= n; i++){
        int x = 0, y = 0;
        for(int j = 1; j <= n; j++){
            if(g[i][j]) x++;
            if(g[j][i]) y++;
		}
        if(x >= (n+1)/2 || y >= (n+1)/2) res++;
    }
    
    cout << res << endl;
    
	return 0;
}
