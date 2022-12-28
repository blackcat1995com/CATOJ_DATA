#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 110, M = 1010;

int n, m, s, e;
int h[N], to[M], ne[M], idx = 0;
bool book[N];

int res = 0;

void add(int a, int b){
    to[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void dfs(int u){
    if(u == e){
        res++;
        return;
    }
    
    for(int i = h[u]; ~i; i = ne[i]){
        int v = to[i];
        if(!book[v]){
            book[v] = true;
            dfs(v);
            book[v] = false;
        }
    }
}

int main() {

    memset(h, -1, sizeof h);
    
    cin >> n >> m;
    while(m--){
        int a, b;
        cin >> a >> b;
        
        add(a, b);
        add(b, a);
    }
    
    cin >> s >> e;
    
    book[s] = true;
    
    dfs(s);
    
    cout << res << endl;

	return 0;
}
