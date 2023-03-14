#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 2510, M = 6200 * 2 + 10;

int n, m, S, T;
int h[N], w[M], to[M], ne[M], idx = 0;
int q[N * 2], dis[N];
bool book[N];

void add(int a, int b, int c){
    w[idx] = c, to[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void spfa(){
    memset(dis, 0x3f, sizeof dis);
    
    dis[S] = 0;
    int hh = 0, tt = -1;
    q[++tt] = S;
    book[S] = true;
    
    while(hh <= tt){
        int t = q[hh++];
        book[t] = false;
        
        for(int i = h[t]; ~i; i = ne[i]){
            int v = to[i];
            if(dis[v] > dis[t] + w[i]){
                dis[v] = dis[t] + w[i];
                if(!book[v]){
                    q[++tt] = v;
                    book[v] = true;
                }
            }
        }
    }
}

int main() {

    cin >> n >> m >> S >> T;
	memset(h, -1, sizeof h);
    
    while(m--){
        int a, b, c;
        cin >> a >> b >> c;
        add(a, b, c);
        add(b, a, c);
    }
    
    spfa();
    
    cout << dis[T] << endl;

	return 0;
}
