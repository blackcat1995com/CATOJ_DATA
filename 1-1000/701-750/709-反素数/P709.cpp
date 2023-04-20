/*
约数个数定理：
24 = 3 * 2^3
(1 + 1) * (3 + 1) = 8
1 2 3 4 6 8 12 24

暴搜：质数 指数
指数最大 30
指数递减
2^10 * 3*15
2*15 * 2*10 更小 反证法
*/

#include <iostream>
using namespace std;

typedef long long LL;

int primes[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23 };

int max_cnt = 0, res, n;

void dfs(int u, int last, int p, int s){
    if(s > max_cnt || s == max_cnt && p < res){
        max_cnt = s;
        res = p;
    }
    
    if(u == 9) return;
    
    for(int i = 1; i <= last; i++){
        if((LL)p * primes[u] > n) break;
        p *= primes[u];
        dfs(u + 1, i, p, s * (i + 1));
    }
}

int main() {

    cin >> n;
    
    dfs(0, 30, 1, 1);
    
    cout << res << endl;
	
	return 0;
}

