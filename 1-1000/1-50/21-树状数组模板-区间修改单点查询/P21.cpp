#include <iostream>
#include <cstdio>
#define lowbit(x) x&-x
using namespace std;

typedef long long LL;
const int N = 1e5 + 10;

int n, m;
LL tr[N];

void update(int x, int t){
	while(x <= n){
    	tr[x] += t;
      	x += lowbit(x);
    }
}

LL sum(int x){
	LL res = 0;
  
  	while(x){
    	res += tr[x];
      	x -= lowbit(x);
    }
  
  	return res;
}

int main() {
  
  	scanf("%d%d", &n, &m);
  
  	for(int i = 1; i <= n; i++){
    	int d;
      	scanf("%d", &d);
      	update(i, d), update(i + 1, -d);
    }
  
  	while(m--){
    	char op[2];
      	int L, R, d, x;
      	scanf("%s", op);
      	if(*op == 'C'){
        	scanf("%d%d%d", &L, &R, &d);
          	update(L, d), update(R + 1, -d);
        }
      	else{
        	scanf("%d", &x);
          	printf("%lld\n", sum(x));
        }
    }
	
	return 0;
}
