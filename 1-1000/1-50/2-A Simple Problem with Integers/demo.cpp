#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e5 + 10;

typedef long long LL;

int n, m;
int a[N];

struct Node{
	int L, R;
  	LL sum, add;	
}tr[N * 4];

void pushup(int u){
	tr[u].sum = (LL)(tr[u << 1].sum + tr[u << 1 | 1].sum);
}

void pushdown(int u){
	
	auto &root = tr[u], &left = tr[u << 1], &right = tr[u << 1 | 1];
	
  	if(root.add){
    	left.add += root.add, left.sum += (LL)(left.R - left.L + 1) * root.add;
      	right.add += root.add, right.sum += (LL)(right.R - right.L + 1) * root.add;
      	root.add = 0;
    }
}

void build(int u, int L, int R){
	
	if(L == R){
    	tr[u] = {L, R, a[L], 0};
      	return;
    }
  
  	tr[u] = {L, R};
  
  	int mid = tr[u].L + tr[u].R >> 1;
  
  	build(u << 1, L, mid), build(u << 1 | 1, mid + 1, R);
  
  	pushup(u);
}

void update(int u, int L, int R, int d){
	
    if(tr[u].L >= L && tr[u].R <= R){
        tr[u].sum += (LL)(tr[u].R - tr[u].L + 1) * d;
        tr[u].add += d;
        return;
    }
    
    pushdown(u);
    
    int mid = tr[u].L + tr[u].R >> 1;
    if(L <= mid) update(u << 1, L, R, d);
    if(R > mid) update(u << 1 | 1, L, R, d);
    
    pushup(u);
    
}


LL query(int u, int L, int R){
	
	if(tr[u].L >= L && tr[u].R <= R) return tr[u].sum;
  	
  	pushdown(u);
  
  	int mid = tr[u].L + tr[u].R >> 1;
  
  	LL res = 0;
  	if(L <= mid) res = query(u << 1, L, R);
  	if(R > mid) res += query(u << 1 | 1, L, R);
  
  	return res;
}


int main() {
  
  	scanf("%d%d", &n, &m);
  
  	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
  
  	build(1, 1, n);

  	while(m--){
        char op[2];
    	int L, R, d;
      	scanf("%s%d%d", op, &L, &R);
      
      	if(*op == 'C'){
        	scanf("%d", &d);
          	update(1, L, R, d);
        }
      	else printf("%lld\n", query(1, L, R));
	}
	
	return 0;
}

