#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 110, M = 1010;

struct Edge{
    int a, b, w;
    bool operator < (const Edge& x) const{
        return w < x.w;
    }
}e[M];

int n, m;
int p[N];

int res = 0;

int find(int x){
    if(p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    
    cin >> n >> m;
    for(int i = 1; i <= n; i++) p[i] = i;
    
    for(int i = 1; i <= m; i++){
        int a, b, w;
        cin >> a >> b >> w;
        e[i] = {a, b, w};
    }
    
    sort(e + 1, e + m + 1);
    
	for(int i = 1; i <= m; i++){
        int pa = find(e[i].a), pb = find(e[i].b);
        if(pa != pb) p[pa] = pb;
        else res += e[i].w;
    }
    
    cout << res << endl;

	return 0;
}
