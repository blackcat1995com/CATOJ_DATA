#include <iostream>
#include <cstring>

using namespace std;

const int N = 1e5 + 10, M = 110;

int n, k;
int w[N];
int f[2][M][2];

int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    cin >> n >> k;
    for (int i = 1; i <= n; ++ i) cin >> w[i];

    memset(f, -0x3f, sizeof f);
    f[0][0][0] = 0; //³õÊ¼×´Ì¬f[0][0][0]

    for (int i = 1; i <= n; ++ i)
    {
        for (int j = 0; j <= k; ++ j)
        {
            f[i & 1][j][0] = f[(i - 1) & 1][j][0];
            if (j) f[i & 1][j][0] = max(f[i & 1][j][0], f[(i - 1) & 1][j - 1][1] + w[i]);
            f[i & 1][j][1] = max(f[(i - 1) & 1][j][1], f[(i - 1) & 1][j][0] - w[i]);
        }
    }

    int res = 0;
    for (int j = 0; j <= k; ++ j) res = max(res, f[n & 1][j][0]); //Ä¿±ê×´Ì¬f[n][j][0]

    cout << res << endl;

    return 0;
}


