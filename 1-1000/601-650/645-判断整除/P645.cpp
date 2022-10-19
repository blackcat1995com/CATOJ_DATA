#include <iostream>
#include <cstdio>
using namespace std;

/*
状态：f(i, j) 前i个数组合 模k 可以得到余数j
f[i][j] = 1;	前i个数组合 模k 可以得到余数j
f[i][j] = 0;    前i个数组合 模k 不可以得到余数j

if f[i - 1][j] == 1
	f[i][(j + a[i]) % k] = 1
*/

const int N = 1e4 + 10;

int n, k;
int a[N];
int f[N][110] = {1};	// f[0][0] = 1;

int main() {
  
  	cin >> n >> k;
  	for(int i = 1; i <= n; i++) {
    	cin >> a[i];
      	a[i] %= k;
    }
  
  	for(int i = 1; i <= n; i++){
    	for(int j = 0; j < k; j++)
          	if(f[i - 1][j]){
            	f[i][(j + a[i]) % k] = 1;
              	f[i][(j - a[i] + k) % k] = 1;
            }
    }

	if(f[n][0]) puts("YES");
  	else puts("NO");
  
  	/*
    k = 4
    1 2 4 = 7 => j = 3  f[3][3] = 1 
    1 2 4 5 = 12 => 0  f[4][0] = 1
    1 2 4 - 5 => f[4][2] = 1
    */
  
	return 0;
}
