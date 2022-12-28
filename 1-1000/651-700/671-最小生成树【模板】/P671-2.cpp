#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;

const int N = 5010, M = 10010;
const int INF = 0x3f3f3f3f;

typedef pair<int, int> PII;

int n, m;
vector<PII> h[N];
bool book[N];
int dis[N];

int prim(){
    int res = 0, cnt = 0;
    memset(dis, 0x3f, sizeof dis);
    
    priority_queue<PII, vector<PII>, greater<PII> > q;
    
    dis[1] = 0;
    q.push({0, 1});
    
    while(q.size()){
        int u = q.top().second;
        q.pop();
        
        if(book[u]) continue;
        
        book[u] = true;
        res += dis[u];
        cnt++;
        
        for(auto e: h[u]){
            int w = e.first, v = e.second;
            if(!book[v] && dis[v] > w){
                dis[v] = w;
                q.push({w, v});
            }
        }
    }
    
    if(cnt == n) return res;
    else return 0;
}

int main() {
	
    cin >> n >> m;
    while(m--){
        int a, b, w;
        cin >> a >> b >> w;
        h[a].push_back({w, b});
        h[b].push_back({w, a});
    }
    
    int ret = prim();
    
    if(ret) cout << ret << endl;
    else cout << "orz" << endl;

	return 0;
}
