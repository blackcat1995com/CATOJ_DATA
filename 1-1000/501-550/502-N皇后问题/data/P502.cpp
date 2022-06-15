#include <iostream>
#include <cstdio>

using namespace std;

const int N = 20;

int n;
char g[N][N];
bool col[N], dg[N], udg[N];

void dfs(int step){
    if(step > n){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++)
                cout << g[i][j];
            cout << endl;
        }
        cout << endl;
        return;
    }
    
    for(int i = 1; i <= n; i++){
        if(!col[i] && !dg[step+i] && !udg[n-step+i]){
            g[step][i] = 'Q';
            col[i] = dg[step+i] = udg[n-step+i] = true;
            dfs(step+1);
            col[i] = dg[step+i] = udg[n-step+i] = false;
            g[step][i] = '.';
        }
    }
}

int main() {
 
    cin >> n;
    
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            g[i][j] = '.';
            
    dfs(1);

	return 0;
}

