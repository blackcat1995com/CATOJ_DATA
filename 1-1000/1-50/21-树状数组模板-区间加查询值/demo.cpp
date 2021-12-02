#include <iostream>
#include <cstdio>
#define lowbit(x) x&-x
using namespace std;

typedef long long LL;

const int N = 1e5 + 10;

int n, m;
int a[N];
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
    
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    
    for(int i = 1; i <= n; i++) update(i, a[i] - a[i - 1]);
    
    while(m--){
        char op[2];
        int l, r, d, x;
        scanf("%s", op);
        if(*op == 'C'){
            scanf("%d%d%d", &l, &r, &d);
            update(l, d), update(r + 1, -d);
        }
        else{
            scanf("%d", &x);
            printf("%lld\n", sum(x));
        }
    }
	
	return 0;
}

