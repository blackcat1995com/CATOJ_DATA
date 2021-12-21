#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 2e4 + 10;

int n, m;
int f[N], g[N], q[N];

int main() {
    
    cin >> n >> m;
    
    while(n--){
        int v, w, s;
        cin >> v >> w >> s;
        memcpy(g, f, sizeof f);
        
        for(int r = 0; r < v; r++){
            int hh = 0, tt = -1;
            for(int j = r; j <= m; j += v){
                while(hh <= tt && j - s * v > q[hh]) hh++;
                while(hh <= tt && g[q[tt]] + (j - q[tt]) / v * w <= g[j]) tt--;
                q[++tt] = j;
                if(hh <= tt) f[j] = g[q[hh]] + (j - q[hh]) / v * w;
            }
        }
    }
    
    cout << f[m] << endl;
	
	return 0;
}
