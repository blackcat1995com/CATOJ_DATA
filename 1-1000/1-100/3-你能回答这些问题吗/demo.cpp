#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 5e5 + 10;

int n, m;
int a[N];

struct Node{
	int l, r, sum, lmax, rmax, tmax;;
}tr[N * 4];

void pushup(Node &u, Node &l, Node &r){
	u.sum = l.sum + r.sum;
  	u.lmax = max(l.lmax, l.sum + r.lmax);
  	u.rmax = max(r.rmax, r.sum + l.rmax);
  	u.tmax = max(max(l.tmax, r.tmax), l.rmax + r.lmax);
}

void pushup(int u){
	pushup(tr[u], tr[u << 1], tr[u << 1 | 1]);
}

void build(int u, int l, int r){
	if(l == r){
    	tr[u] = {l, r, a[l], a[l], a[l], a[l]};
      	return;
    }
  
  	tr[u] = {l, r};
  	int mid = l + r >> 1;
  	build(u << 1, l, mid), build(u << 1 | 1, mid + 1, r);
  	pushup(u);
}

void modify(int u, int x, int v){
    
    if(tr[u].l == x && tr[u].r == x){
        tr[u] = {x, x, v, v, v, v};
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
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    
    build(1, 1, n);
    
    while(m--){
        int k, x, y;
        scanf("%d%d%d", &k, &x, &y);
        if(k == 1){
            if(x > y) swap(x, y);
            printf("%d\n", query(1, x, y).tmax);
        }
        else modify(1, x, y);
    }
	
	return 0;
}

