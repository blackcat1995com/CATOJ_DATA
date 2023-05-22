#include <iostream>
#include <cstdio>
using namespace std;

const int N = 15, M = 205, T = 15;

int m, n, t;
int w[T][N], v[T][N], s[T], f[M];

int main() {

    scanf("%d%d%d", &m, &n, &t);

    for(int i = 1; i <= n; i++){
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        s[z]++;
        w[z][s[z]] = x;
        v[z][s[z]] = y;
    }
	
    for(int i = 1; i <= t; i++)
        for(int j = m; j >= 1; j--)
            for(int k = 1; k <= s[i]; k++)
                if(j >= w[i][k])
                    f[j] = max(f[j], v[i][k] + f[j - w[i][k]]);

    printf("%d\n", f[m]);

	return 0;
}
