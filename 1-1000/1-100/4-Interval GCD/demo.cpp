#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

typedef long long LL;

const int N = 5e5 + 10;

int n, m;
LL a[N];

struct Node{
    int l, r;
    LL sum, v;
}tr[N * 4];

LL gcd(LL a, LL b){
    return b ? gcd(b, a % b) : a;
}

void pushup(Node &u, Node &l, Node &r){
    u.sum = l.sum + r.sum;
    u.v = gcd(l.v, r.v);
}

void pushup(int u){
    pushup(tr[u], tr[u << 1], tr[u << 1 | 1]);
}

void build(int u, int l, int r){
    if(l == r){
        LL b = a[r] - a[r - 1];
        tr[u] = {l, r, b, b};
        return;
    }
    tr[u] = {l ,r};
    int mid = l + r >> 1;
    build(u << 1, l, mid), build(u << 1 | 1, mid + 1, r);
    pushup(u);
}

void modify(int u, int x, LL v){
    if(tr[u].l == x && tr[u].r == x){
        LL b = tr[u].sum + v;
        tr[u] = {x, x, b, b};
        return;
    }
    
    int mid = tr[u].l + tr[u].r >> 1;
    if(x <= mid) modify(u << 1, x, v);
    else modify(u << 1 | 1, x, v);
    pushup(u);
}

Node query(int u, int l, int r){
    if(tr[u].l >= l && tr[u].r <= r) return tr[u];
    
    int mid = tr[u].l + tr[u].r >> 1;
    
    if(r <= mid) return query(u << 1, l, r);
    else if(l > mid) return query(u << 1 | 1, l, r);
    else{
        Node left = query(u << 1, l, r);
        Node right = query(u << 1 | 1, l, r);
        Node res;
        pushup(res, left, right);
        return res;
    }
}

int main() {
    
    scanf("%d%d", &n, &m);
    
    for(int i = 1; i <= n; i++) scanf("%lld", &a[i]);
    build(1, 1, n);
    
    while(m--){
        int l, r;
        LL v;
        char op[2];
        
        scanf("%s%d%d", op, &l, &r);
        if(*op == 'Q'){
            Node left = query(1, 1, l), right = query(1, l + 1, r);
            printf("%lld\n", abs(gcd(left.sum, right.v)));
        }
        else{
            scanf("%lld", &v);
            modify(1, l, v);
            
            if(r + 1 <= n) modify(1, r + 1, -v);
        }
    }
	
	return 0;
}

