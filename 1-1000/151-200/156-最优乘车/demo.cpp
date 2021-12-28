#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

const int N = 510, M = 110, INF = 0x3f3f3f3f;

int m, n;
int g[N][N];

int main() {
    
    scanf("%d%d\n", &m, &n);
    
    memset(g, 0x3f, sizeof g);
    
    while(m--){
        string line;
        vector<int> v;
        getline(cin, line);

        for(int i = 0; i < line.size(); i++){
            if(line[i] >= '0' && line[i] <= '9'){
                int x = 0;
                while(line[i] >= '0' && line[i] <= '9') x = x * 10 + line[i++] - '0';
                v.push_back(x); 
            }
        }
        
        for(int i = 0; i < v.size(); i++)
        	for(int j = i + 1; j < v.size(); j++)
        		g[v[i]][v[j]] = 1;	
    }
    
    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
    
    if(g[1][n] == INF) puts("NO");
    else cout << max(g[1][n] - 1, 0) << endl;

   
	return 0;
}

