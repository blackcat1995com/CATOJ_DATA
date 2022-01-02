#include <iostream>
#include <cstdio>
using namespace std;

const int N = 3010;

int n;
int a[N], b[N];
int f[N][N];

int main() {
	
	scanf("%d\n", &n);
	
	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
	for(int i = 1; i <= n; i++) scanf("%d", &b[i]);
	
	for(int i = 1; i <= n; i++){
	     int maxv = 1;
	
	    for(int j = 1; j <= n; j++){
	        f[i][j] = f[i-1][j];
	        
	        if(a[i] == b[j]) f[i][j] = max(maxv, f[i][j]);
	        if(b[j] < a[i]) maxv = max(maxv, f[i-1][j] + 1);
	    }
	}
	
	   
    
    int ans = 0;
    for(int i = 1; i <= n; i++) ans = max(ans, f[n][i]);
    
    printf("%d\n", ans);
	return 0;
}

