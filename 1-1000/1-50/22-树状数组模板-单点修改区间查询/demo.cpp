#include <iostream>
#include <cstdio>
#define lowbit(x) x&-x
using namespace std;

const int N = 1e6 + 10;

int n, q;
int tr[N];

// 单点更新 将x位置的数加上t
void update(int x, int t){
	while(x <= n){
    	tr[x] += t;
      	x += lowbit(x);
    }
}

// 预处理前x项之和
int sum(int x){
	int res = 0;
  	while(x){
    	res += tr[x];
      	x -= lowbit(x);
    }
  
  	return res;
}

int main() {
  
  	scanf("%d%d", &n, &q);
  
  	for(int i = 1; i <= n; i++) {
    	int t;
      	scanf("%d", &t);
      	update(i, t);
    }
  
  	while(q--){
    	int op, a, b;
      	scanf("%d%d%d", &op, &a, &b);
      	if(op == 1) update(a, b);
      	else printf("%d\n", sum(b) - sum(a - 1));
    }
	
	return 0;
}

