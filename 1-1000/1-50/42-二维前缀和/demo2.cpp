#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010;

int n, m, q;
int a[N][N], s[N][N];

int main() {

	freopen("10.in", "r", stdin);
	freopen("t10.out", "w", stdout);
    scanf("%d%d%d", &n, &m, &q);

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + a[i][j];

    while(q--){
        int x1, y1, x2, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
      	int sum = 0;
      	for(int i = x1; i <= x2; i++)
          	for(int j = y1; j <= y2; j++)
              	sum += a[i][j];
        printf("%d\n", sum);
    }
	return 0;
}
