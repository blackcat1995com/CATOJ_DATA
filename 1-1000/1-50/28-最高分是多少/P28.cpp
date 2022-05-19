#include <iostream>
#include <cstdio>
using namespace std;

const int N = 3e4 + 10;

// 设计线段树结构体
struct Node{
	int L, R, dat;	// dat 代表[L, R]区间最大值
}tr[N * 4];

// 建树 调用 build(1, 1, N)
void build(int u, int L, int R){
	tr[u] = {L, R};
  
  	// 返回条件 到叶子节点
  	if(L == R) return;
  
  	int mid = tr[u].L + tr[u].R >> 1;
  
  	// 分治建立左子树、右子树
  	build(u << 1, L, mid), build(u << 1 | 1, mid + 1, R);
}

void pushup(int u){
	tr[u].dat = max(tr[u << 1].dat, tr[u << 1 | 1].dat);
}

// 单点更新，将x位置数据更新为dat，调用build(1, 7, 1)
void update(int u, int x, int dat){
	// 只有到叶子节点[x,x]，才可以修改
  	if(tr[u].L == x && tr[u].R == x){
    	tr[u].dat = dat;
      	return;
    }
  
  	int mid = tr[u].L + tr[u].R >> 1;
  	if(x <= mid) update(u << 1, x, dat);
  	else update(u << 1 | 1, x, dat);
  	
  	pushup(u);
}

// 区间查询 调用 query(1, 2, 8)
int query(int u, int L, int R){
	// 如果线段树节点左右区间完全包含在被询问区间[L, R]
  	if(tr[u].L >= L && tr[u].R <= R) return tr[u].dat;
  
  	int mid = tr[u].L + tr[u].R >> 1;
  	
  	int res = 0;
  	if(L <= mid) res = query(u << 1, L, R);
  	if(R > mid) res = max(res, query(u << 1 | 1, L, R));
  
  	return res;
}

int main() {
  
  	int n, m;
  	while(~scanf("%d%d", &n, &m)){
      	
      	// 建树
      	build(1, 1, n);
      	
      	// 初始值
    	for(int i = 1; i <= n; i++){
        	int t;
          	scanf("%d", &t);
          	update(1, i, t);
        }
      
      	while(m--){
        	char op[2];
          	int a, b;
          	scanf("%s%d%d", op, &a, &b);
          	if(*op == 'U') update(1, a, b);
          	else printf("%d\n", query(1, a, b));
        }
    }
	
	return 0;
}

