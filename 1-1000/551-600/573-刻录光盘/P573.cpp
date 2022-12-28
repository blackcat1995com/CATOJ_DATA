#include <iostream>
#include <cstdio>
using namespace std;

const int N = 210;

int n;
bool g[N][N];
int p[N];

int res = 0;

int main() {
    
    cin >> n;
    for(int i = 1; i <= n; i++){
        int t;
        while(cin >> t, t)
            g[i][t] = true;
    }
    
    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                g[i][j] = g[i][j] || g[i][k] && g[k][j];
	
    for(int i = 1; i <= n; i++) p[i] = i;
    
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(g[i][j])
                p[j] = p[i];
	
    for(int i = 1; i <= n; i++)
        if(p[i] == i)
            res++;
    
    cout << res << endl;
    
	return 0;
}
