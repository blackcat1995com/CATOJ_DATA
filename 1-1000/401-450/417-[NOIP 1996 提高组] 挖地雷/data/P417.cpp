#include <iostream>
#include <cstdio>
using namespace std;

const int N = 30;

int n;
int a[N];
bool g[N][N];
int f[N], pre[N];
int ans = 0, st = 0;

int main() {

	freopen("3.in", "r", stdin);
	freopen("3.out", "w", stdout);
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
        f[i] = a[i];
    }

    for(int i = 1; i < n; i++){
        for(int j = i + 1; j <= n; j++){
            int x;
            scanf("%d", &x);
            if(x)
                g[i][j] = true;
        }
    }

    for(int i = n - 1; i >= 1; i--){
        int maxv = 0, idx = 0;
        for(int j = i + 1; j <= n; j++){
            if(g[i][j] && f[j] > maxv){
                maxv = f[j];
                idx = j;
            }
        }

        f[i] += maxv;
        pre[i] = idx;

        if(f[i] > ans){
            ans = f[i];
            st = i;
        }
    }
	
    while(st){
        printf("%d ", st);
        st = pre[st];
    }

    printf("\n%d\n", ans);
	return 0;
}

