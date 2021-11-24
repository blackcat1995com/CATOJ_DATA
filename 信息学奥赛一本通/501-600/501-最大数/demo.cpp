#include <iostream>
#include <cstdio>
using namespace std;

const int N = 2e5 + 10;
typedef long long LL;

struct Node{
    int l, r, v;
}tr[N * 4];

int m, p;

void pushup(int u){
    tr[u].v = max(tr[u << 1].v, tr[u << 1 | 1].v);
}

void build(int u, int l, int r){
    tr[u] = {l, r};
    if(l == r) return;
    int mid = l + r >> 1;
    build(u << 1, l, mid), build(u << 1 | 1, mid + 1, r);
}

void modify(int u, int x, int v){
    if(tr[u].l == tr[u].r){
        tr[u].v = v;
        return;
    }
    int mid = tr[u].l + tr[u].r >> 1;
    if(x <= mid) modify(u << 1, x, v);
    else modify(u << 1 | 1, x, v);
    pushup(u);
}

int query(int u, int l, int r){
    if(tr[u].l >= l && tr[u].r <= r) return tr[u].v;
    
    int mid = tr[u].l + tr[u].r >> 1;
    
    int v = 0;
    
    if(l <= mid) v = query(u << 1, l, r);
    if(r > mid) v = max(v, query(u << 1 | 1, l, r));
    
    return v;
}

int main(){
    
    int n = 0, lst = 0;
    
    scanf("%d%d", &m, &p);
    build(1, 1, m);
    
    while(m--){
        char op[2];
        int x;
        scanf("%s%d", op, &x);
        if(*op == 'A'){
            modify(1, n + 1, ((LL)x + lst) % p);
            n++;
        }
        else{
            lst = query(1, n - x + 1, n);
            printf("%d\n", lst);
        }
    }
    
    return 0;
}



