#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 110, INF = 0x3f3f3f3f;

int n, m;
int d[N][N];

int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    cin >> n >> m;

    memset(d, 0x3f, sizeof d);
    for (int i = 1; i <= n; i ++ ) d[i][i] = 0;
    for (int i = 0; i < m; i ++ )
    {
        int a, b, c;
        cin >> a >> b >> c;
        d[a][b] = d[b][a] = min(d[a][b], c);
    }

    for (int k = 1; k <= n; k ++ )
        for (int i = 1; i <= n; i ++ )
            for (int j = 1; j <= n; j ++ )
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

    int res = 0;
    for (int i = 1; i <= n; i ++ )
        if (d[1][i] == INF)
        {
            res = -1;
            break;
        }
        else res = max(res, d[1][i]);

    cout << res << endl;

    return 0;
}


