#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 55, INF = 0x3f3f3f3f;

int n;
int g[N][N];

int main() {

    cin >> n;
    memset(g, 0x3f, sizeof 0x3f);
    
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++){
            int x;
            cin >> x;
            if(x) g[i][j] = x;
            else if(i != j) g[i][j] = INF;
        }
    
    // FloydÄ£°å
    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);	// ËÉ³Ú²Ù×÷
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) cout << 0 << " ";
            else if(g[i][j] == INF) cout << -1 << " ";
            else cout << g[i][j] << " ";
        }
        cout << endl;
    }

	return 0;
}
