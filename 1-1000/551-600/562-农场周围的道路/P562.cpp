/*
x 
n - x
n - x - x = k
n - k = 2 * x
=> x = (n - k) / 2

// 显然不成立
x - n + x = k
2 * x = k - n;
*/

#include <iostream>
#include <cstdio>
using namespace std;

int n, k;
int res = 1;

void dfs(int n){
    if(n - k > 0 && (n - k) % 2 == 0){
        int a = (n - k) / 2;
        int b = n - a;
        res++;
        dfs(a);
        dfs(b);
    }
}

int main() {

	cin >> n >> k;
    
    dfs(n);
    
    cout << res << endl;
    
	return 0;
}
