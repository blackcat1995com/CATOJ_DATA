#include <iostream>
#include <cstdio>
using namespace std;

const int N = 15;
int n;
int w[N][N];
int f[N*2][N][N];

int main() {
	
    scanf("%d", &n);

    int a, b, c;
    while(scanf("%d%d%d", &a, &b, &c) == 1, a || b || c) w[a][b] = c;

    for(int k = 2; k <= n * 2; k++)
        for(int x1 = 1; x1 <= n; x1++)
            for(int x2 = 1; x2 <= n; x2++){
                int y1 = k - x1, y2 = k - x2;
                if(!(y1>=1 && y1<=n && y2>=1 && y2<=n)) continue;
                int t1 = max(f[k-1][x1][x2-1], f[k-1][x1-1][x2]);
                int t2 = max(f[k-1][x1-1][x2-1], f[k-1][x1][x2]);
                f[k][x1][x2] = max(t1, t2) + w[x1][y1];
                if(x1 != x2) f[k][x1][x2] += w[x2][y2];
            }

    printf("%d\n", f[n*2][n][n]);

	return 0;
}
