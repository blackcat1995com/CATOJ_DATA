#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

const int N = 35, M = 210;

int n, m;
int q[N];
vector<int> h[N];

bool book[N];

void dfs(int u){
    for(auto v: h[u]){
        if(!book[v]){
            book[v] = true;
            cout << v << " ";
            dfs(v);
        }
    }
}

void bfs(){
    memset(book, 0, sizeof book);
    
    int hh = 0, tt = -1;
    book[1] = true;
    
    cout << 1 << " ";
    q[++tt] = 1;
    
    while(hh <= tt){
        int t = q[hh++];
        for(auto v: h[t]){
            if(!book[v]){
                book[v] = true;
                q[++tt] = v;
                cout << v << " ";
            }
        }
    }
}

int main() {

	cin >> n >> m;
    while(m--){
        int a, b;
        cin >> a >> b;
        h[a].push_back(b);
    }
    
    book[1] = true;
    cout << 1 << " ";
    dfs(1);
    
    cout << endl;
    
    bfs();
    
	return 0;
}
