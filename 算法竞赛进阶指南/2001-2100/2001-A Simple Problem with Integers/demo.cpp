#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

const int N = 1e5 + 10;

int n, m;
int a[N];

struct Node{
    int l, r;
    LL sum, add;
}tr[N * 4];

void pushup(int u){
    tr[u].sum = tr[u << 1].sum + tr[u << 1 | 1].sum;
}

void pushdown(int u){
    auto &root = tr[u], &left = tr[u << 1], &right = tr[u << 1 | 1];
    if(root.add){
        left.add += root.add, left.sum += (LL)(left.r - left.l + 1) * root.add;
        right.add += root.add, right.sum += (LL)(right.r - right.l + 1) * root.add;
        root.add = 0;
    }
}

void build(int u, int l, int r){
    if(l == r){
        tr[u] = {l, r, a[l], 0};
        return;
    }
    
    tr[u] = {l ,r};
    int mid = l + r >> 1;
    build(u << 1, l, mid), build(u << 1 | 1, mid + 1, r);
    pushup(u);
}

void modify(int u, int l, int r, int d){
    if(tr[u].l >= l && tr[u].r <= r){
        tr[u].sum += (LL)(tr[u].r - tr[u].l + 1) * d;
        tr[u].add += d;
        return;
    }
    
    pushdown(u);
    
    int mid = tr[u].l + tr[u].r >> 1;
    if(l <= mid) modify(u << 1, l, r, d);
    if(r > mid) modify(u << 1 | 1, l, r, d);
    pushup(u);
}

LL query(int u, int l, int r){
    if(tr[u].l >= l && tr[u].r <= r) return tr[u].sum;
    
    pushdown(u);
    
    int mid = tr[u].l + tr[u].r >> 1;
    
    LL sum = 0;
    
    if(l <= mid) sum = query(u << 1, l, r);
    if(r > mid) sum += query(u << 1 | 1, l, r);
    
    return sum;
    
}

int main(){
    
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) scanf("%d", &a[i]);
    build(1, 1, n);

    char op[2];
    int l, r, x;
    while (m -- ){
        scanf("%s%d%d", op, &l, &r);
        if (*op == 'Q') printf("%lld\n", query(1, l, r));
        else{
            scanf("%d", &x);
            modify(1, l, r, x);
        }
    }
    return 0;
}



