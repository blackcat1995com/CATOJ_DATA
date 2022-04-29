#include <iostream>
#include <cstdio>
using namespace std;

const int N = 210;

int n;
int a[N];
int f[N][N];
int ans = 0;

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	cin >> a[i];
      	a[i + n] = a[i];
    }
  
  	for(int len = 3; len <= n + 1; len++){
    	for(int i = 1; i + len - 1 <= n * 2; i++){
        	int j = i + len - 1;
          	for(int k = i + 1; k < j; k++)
              	f[i][j] = max(f[i][j], f[i][k] + f[k][j] + a[i] * a[k] * a[j]);
        }
    }
  
  	for(int i = 1; i <= n; i++) ans = max(ans, f[i][i + n]);
  	cout << ans << endl;

	return 0;
}

