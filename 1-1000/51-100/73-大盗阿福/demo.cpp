#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e5 + 10, INF = 0x3f3f3f3f;

int n;
int w[N], f[N][2];

int main() {
	
	int T;
	scanf("%d", &T);
	
	while(T--){
	    
	    scanf("%d", &n);
	    
	    for(int i = 1; i <= n; i++) scanf("%d", &w[i]);
	    
	    f[0][0] = 0, f[0][1] = -INF;
	    
	    for(int i = 1; i <= n; i++){
	        f[i][0] = max(f[i-1][0], f[i-1][1]);
	        f[i][1] = f[i-1][0] + w[i];
	    }
	    
	    printf("%d\n", max(f[n][0], f[n][1]));
	    
	}
	
	return 0;
}
