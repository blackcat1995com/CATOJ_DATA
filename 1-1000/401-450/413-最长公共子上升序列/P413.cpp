#include <iostream>
#include <cstdio>
using namespace std;

const int N = 510;
int n, m;
int a[N], b[N];
int f[N][N];
int pre[N];
int stk[N], top = 0;

int main() {
	
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    for(int i = 1; i <= m; i++) scanf("%d", &b[i]);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            f[i][j] = f[i-1][j];
            if(a[i] == b[j]){
                int maxv = 1;
                for(int k = 1; k < j; k++){
                    if(b[k] < b[j] && f[i-1][k] + 1 > maxv){
                        maxv = f[i-1][k] + 1;
                        pre[j] = k;
                    }
                }
                f[i][j] = max(f[i][j], maxv);
            }
        }
    }

    int ans = 0, iend = 0;
    for(int i = 1; i <= m; i++){
        if(f[n][i] > ans){
            ans = f[n][i];
            iend = i;
        }
    }

    printf("%d\n", ans);

    while(iend){
        stk[++top] = b[iend];
        iend = pre[iend];
    }

    while(top)
        printf("%d ", stk[top--]);
    

	return 0;
}




