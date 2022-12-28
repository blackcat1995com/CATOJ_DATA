#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int n, m;
int g[N][N];

int main() {
    
    cin >> n >> m;
    
    while(m--){
        int a, b;
        cin >> a >> b;
        g[a][b] = g[b][a] = 1;
    }

    /*
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cout << g[i][j] << " ";
        cout << endl;
    }
    */
    
    
    int q;
    cin >> q;
    
    while(q--){
        int v;
        cin >> v;
        
        int sum = 0;
        
        for(int i = 1; i <= n; i++)
            sum += g[v][i];
        
        cout << sum << endl;
    }

	return 0;
}

