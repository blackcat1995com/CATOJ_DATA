#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;
int n;
int a[N][N], f[N][N];

int main() {
	
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);

    f[1][1] = a[1][1];

    for(int i = 2; i <= n; i++) f[i][1] = f[i-1][1] + a[i][1];
    for(int j = 2; j <= n; j++) f[1][j] = f[1][j-1] + a[1][j];

    for(int i = 2; i <= n; i++)
        for(int j = 2; j <= n; j++)
            f[i][j] = min(f[i-1][j], f[i][j-1]) + a[i][j];

    printf("%d\n", f[n][n]);



	return 0;
}



