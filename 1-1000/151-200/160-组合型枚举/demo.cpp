#include <iostream>
#include <cstdio>
using namespace std;

const int N = 30;

int n, m;
int path[N];

void dfs(int u){
    if(u == m + 1){
        for(int i = 1; i <= m; i++)
            cout << path[i] << " ";
        cout << endl;
        return;
    }
    
    for(int i = path[u - 1] + 1; i <= n; i++){
        path[u] = i;
        dfs(u + 1);
        path[u] = 0;
    }
}

int main() {
    
    cin >> n >> m;
    dfs(1);
	
	return 0;
}


