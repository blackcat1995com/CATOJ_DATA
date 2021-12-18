#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

const int N = 1010, INF = 0x3f3f3f3f;

int n;
int a[N][N], f[N][N];

int main() {
	
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= i; j++)
            scanf("%d", &a[i][j]);

    memset(f, -0x3f, sizeof(f));
    f[1][1] = a[1][1];

    for(int i = 2; i <= n; i++)
        for(int j = 1; j <= i; j++)
            f[i][j] = max(f[i-1][j-1], f[i-1][j]) + a[i][j];

    int ans = -INF;

    for(int j = 1; j <= n; j++)
        ans = max(ans, f[n][j]);

    printf("%d\n", ans);

	return 0;
}



