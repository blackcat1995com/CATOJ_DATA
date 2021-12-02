#include <iostream>
#include <cstdio>
using namespace std;

const int N = 5e3 + 10;

int n, R;
int s[N][N];

int main() {

    scanf("%d%d", &n, &R);

    for(int i = 1; i <= n; i++){
        int x, y, w;
        scanf("%d%d%d", &x, &y, &w);
        s[++x][++y] += w;
    }

    for(int i = 1; i <= 5001; i++)
        for(int j = 1; j <= 5001; j++)
            s[i][j] += s[i-1][j] + s[i][j-1] - s[i-1][j-1];

    int ans = 0;

    for(int i = R; i <= 5001; i++)
        for(int j = R; j <= 5001; j++)
            ans = max(ans, s[i][j] - s[i-R][j] - s[i][j-R] + s[i-R][j-R]);

    printf("%d\n", ans);
    
	return 0;
}

