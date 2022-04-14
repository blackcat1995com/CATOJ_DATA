#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

const int N = 1e5 + 10;

int m;
int v[N], l[N], r[N];
int idx = 0;

void init(){
    l[1] = 0, r[0] = 1, idx = 2;
}

void add(int k, int x){
    v[idx] = x;
    l[idx] = k;
    r[idx] = r[k];
    l[r[k]] = idx;
    r[k] = idx++;
}

void del(int k){
    r[l[k]] = r[k];
    l[r[k]] = l[k];
}

void traverse(){
    for(int i = r[0]; i != 1; i = r[i]) cout << v[i] << " ";
    puts("");
}

int main() {
    
    freopen("2.in", "r", stdin);
	freopen("2.out", "w", stdout);
    cin >> m;
    
    init();
    
    while(m--){
        int k, x;
        string op;
        cin >> op;
        if(op == "R"){
            cin >> x;
            add(l[1], x);
        }
        else if(op == "L"){
            cin >> x;
            add(0, x);
        }
        else if(op == "D"){
            cin >> k;
            del(k + 1);
        }
        else if(op == "IL"){
            cin >> k >> x;
            add(l[k+1], x);
        }
        else{
            cin >> k >> x;
            add(k+1, x);
        }
    }
    
    traverse();
	
	return 0;
}
