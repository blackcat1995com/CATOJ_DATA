#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 110;

int n, m;
int u[N], v[N], w[N], dis[N];

int main() {

	cin >> n >> m;
    for(int i = 1;  i <= m; i++) cin >> u[i] >> v[i] >> w[i];
    
    memset(dis, 0x3f, sizeof dis);
    
    dis[1] = 0;
    
    for(int k = 1; k < n; k++)
        for(int i = 1; i <= m; i++)
            if(dis[v[i]] > dis[u[i]] + w[i])
                dis[v[i]] = dis[u[i]] + w[i];
    
    bool has_minus_circle = false;
    
    for(int i = 1; i <= m; i++)
        if(dis[v[i]] > dis[u[i]] + w[i]){
            has_minus_circle = true;
            break;
        }
            
   	if(has_minus_circle) cout << "not possible" << endl;
    else{
        for(int i = 2; i <= n; i++) cout << dis[i] << " ";
    }
    
	return 0;
}
