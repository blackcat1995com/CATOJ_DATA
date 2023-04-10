#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 110, M = 10010;

int n;
int h[N], to[M], ne[M], idx = 0;

int q[N], du[N];

void add(int a, int b){
    to[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void toposort(){
    int hh = 0, tt = -1;
    for(int i = 1; i <= n; i++)
        if(!du[i])
            q[++tt] = i;
    
    while(hh <= tt){
        int t = q[hh++];
        cout << t << " ";
        for(int i = h[t]; ~i; i = ne[i]){
            int v = to[i];
            if(--du[v] == 0)
                q[++tt] = v;
        }
    }
}

int main() {

	cin >> n;
    memset(h, -1, sizeof h);
    
    for(int i = 1; i <= n; i++){
        int b;
        while(cin >> b, b){
            add(i, b);
            du[b]++;
        }
    }
    
    toposort();
    
	return 0;
}

