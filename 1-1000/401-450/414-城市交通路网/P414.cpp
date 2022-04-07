#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 15, INF = 0x3f3f3f3f;

int n;
int g[N][N];
int f[N], pre[N];

int main() {

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            scanf("%d", &g[i][j]);

    memset(f, 0x3f, sizeof(f));

    f[n] = 0;

    for(int i = n - 1; i >= 1; i--){
        for(int j = i + 1; j <= n; j++){
            if(g[i][j] > 0 && f[j] < INF && f[i] > g[i][j] + f[j]){
                f[i] = g[i][j] + f[j];
                pre[i] = j;
            }
        }
    }

    printf("minlong=%d\n", f[1]);

    int i = 1;
    while(i){
        printf("%d ", i);
        i = pre[i];
    }

	return 0;
}
