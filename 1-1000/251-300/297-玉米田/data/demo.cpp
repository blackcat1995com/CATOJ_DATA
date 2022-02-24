#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

const int N = 15, M = 1 << 12, MOD = 1e8;

int n, m;
int g[N];
vector<int> states, h[M];
int f[N][M] = {1};

bool check(int x){
    return !(x & x >> 1);
}

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 0; j < m; j++){
            int t;
            cin >> t;
            g[i] += !t << j;
        }
        
    for(int i = 0; i < 1 << m; i++)
        if(check(i)) states.push_back(i);
    
    for(int i = 0; i < states.size(); i++)
        for(int j = 0; j < states.size(); j++){
            int x = states[i], y = states[j];
            if((x & y) == 0) h[i].push_back(j);
        }
        
    
    for(int i = 1; i <= n + 1; i++)
        for(int a = 0; a < states.size(); a++)
            for(auto b : h[a]){
                if(!(g[i] & states[a]))
                    f[i][a] = (f[i][a] + f[i - 1][b]) % MOD;
            }
            
    cout << f[n + 1][0] << endl;
	

	return 0;
}


