#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

const int N = 5010, M = 10010;
const int INF = 0x3f3f3f3f;

typedef pair<int, int> PII;

int n, m;
vector<PII> h[N];
bool book[N];
int dis[N];

int prim(){
    int res = 0;
    memset(dis, 0x3f, sizeof dis);
    dis[1] = 0;
    
    for(int i = 1; i <= n; i++){
        int u = -1;
        for(int j = 1; j <= n; j++)
            if(!book[j] && (u == -1 || dis[j] < dis[u]))
                u = j;
        
        if(dis[u] == INF) return 0;
        
        book[u] = true;
        
        res += dis[u];
        
        for(auto e: h[u]){
            int v = e.first, w = e.second;
            if(!book[v] && dis[v] > w)
                dis[v] = w;
        }
    }
    
    return res;
}

int main() {
	
    cin >> n >> m;
    while(m--){
        int a, b, w;
        cin >> a >> b >> w;
        h[a].push_back({b, w});
        h[b].push_back({a, w});
    }
    
    int ret = prim();
    
    if(ret) cout << ret << endl;
    else cout << "orz" << endl;

	return 0;
}
