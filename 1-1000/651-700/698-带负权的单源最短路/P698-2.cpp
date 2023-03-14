#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 110;

int n, m;
int u[N], v[N], w[N], dis[N], bak[N];

int main() {

	cin >> n >> m;
    for(int i = 1; i <= m; i++) cin >> u[i] >> v[i] >> w[i];
    
    memset(dis, 0x3f, sizeof dis);
    
    dis[1] = 0;
    
    for(int k = 1; k < n; k++){
        memcpy(bak, dis, sizeof dis);
        
        for(int i = 1; i <= m; i++)
            if(dis[v[i]] > dis[u[i]] + w[i])
                dis[v[i]] = dis[u[i]] + w[i];
        
        bool is_ok = true;
        for(int i = 1; i <= n; i++)
            if(bak[i] != dis[i]){
                is_ok = false;
                break;
            }
        
        if(is_ok) break;
    }
        
    bool has_minus_circle = false;
    
    for(int i = 1; i <= m; i++){
        if(dis[v[i]] > dis[u[i]] + w[i]){
            has_minus_circle = true;
            break;
        }
    }
                 
   	if(has_minus_circle) cout << "not possible" << endl;
    else{
        for(int i = 2; i <= n; i++) cout << dis[i] << " ";
    }
    
	return 0;
}
