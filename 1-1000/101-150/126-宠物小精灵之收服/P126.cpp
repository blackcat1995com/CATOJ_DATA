#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010;

int n, m, k;
int f[N][N];

int main() {
	freopen("4.in", "r", stdin);
	freopen("4.out", "w", stdout);
    scanf("%d%d%d", &n, &m, &k);

    while(k--){
        int v1, v2;
        scanf("%d%d", &v1, &v2);
        for(int i = n; i >= v1; i--)
            for(int j = m - 1; j >= v2; j--)
                f[i][j] = max(f[i][j], f[i-v1][j-v2] + 1);
    }

    printf("%d ", f[n][m-1]);

    int t = m - 1;
    while(t > 0 && f[n][t-1] == f[n][m-1]) t--;

    printf("%d\n", m - t);
	return 0;
}
