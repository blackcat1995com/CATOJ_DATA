#include <iostream>
#include <cstdio>
using namespace std;

const int N = 2e5 + 10;
typedef long long LL;

int m, p;

struct Node{
	int L, R, dat;	// dat 最大值
}tr[N * 4];

void pushup(int u){
	tr[u].dat = max(tr[u << 1].dat, tr[u << 1 | 1].dat);
}

// 建树
void build(int u, int L, int R){
	tr[u] = {L, R};
  	if(L == R) return;
  	
  	int mid = tr[u].L + tr[u].R >> 1;
  
  	build(u << 1, L, mid), build(u << 1 | 1, mid + 1, R);
}

// 修改 将x处的值更改为dat
void update(int u, int x, int dat){
	if(tr[u].L == x && tr[u].R == x){
    	tr[u].dat = dat;
      	return;
    }
  
  	int mid = tr[u].L + tr[u].R >> 1;
  	if(x <= mid) update(u << 1, x, dat);
  	else update(u << 1 | 1, x, dat);
  
  	pushup(u);
}

// 查询
int query(int u, int L, int R){
  	// 如果线段树区间在被查询区间内，直接返回当前区间最大值
	if(tr[u].L >= L && tr[u].R <= R) return tr[u].dat;
  
  	int mid = tr[u].L + tr[u].R >> 1;
  	
  	int dat = 0;
  	if(L <= mid) dat = query(u << 1, L, R);
  	if(R > mid) dat = max(dat, query(u << 1 | 1, L, R));
  	return dat;
}

int main() {
  
  	int n = 0, lst = 0;
    
    scanf("%d%d", &m, &p);
    build(1, 1, m);
    
    while(m--){
        char op[2];
        int x;
        scanf("%s%d", op, &x);
        if(*op == 'A'){
            update(1, n + 1, ((LL)x + lst) % p);
            n++;
        }
        else{
            lst = query(1, n - x + 1, n);
            printf("%d\n", lst);
        }
    }
	
	return 0;
}
