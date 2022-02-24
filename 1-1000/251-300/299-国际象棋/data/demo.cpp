#include <iostream>
#include <vector>
#include <set>

using namespace std;

const int N = 110, M = 1 << 6, MOD = 1e9 + 7;

int n, m, k;
int f[N][M][M][22];
//f[i, a, b, k]:表示已经放好了前i - 1行，第i - 2的状态是a,第i行的状态是b,共放了k皮马的方案的集合



int count(int x)
{
    int res = 0;
    while(x)
    {
        res ++;
        x -= x & -x;
    }
    return res;
}

int main()
{
	
	freopen("5.in", "r", stdin);
	freopen("5.out", "w", stdout);
    cin >> n >> m >> k;

    f[0][0][0][0] = 1;
    for(int i = 1;i <= m + 2;i ++)
        for(int a = 0;a < 1 << n;a ++)
            for(int b = 0;b < 1 << n;b ++)
            {
                if(a & (b >> 2) || (a >> 2) & b) continue;
                for(int c = 0;c < 1 << n;c ++)
                {
                    if(b & (c >> 2) || (b >> 2) & c) continue;
                    if(a & (c >> 1) || (a >> 1) & c) continue;
                    int t = count(c);
                    for(int j = t;j <= k;j ++)
                        f[i][b][c][j] = (f[i][b][c][j] + f[i - 1][a][b][j - t]) % MOD;
                }
            }

    // int res = 0;
    // for(int a = 0;a < 1 << n;a ++)
    //     for(int b = 0;b < 1 << n;b ++)
    //         res = (res + f[m][a][b][k]) % MOD;

    cout << f[m + 2][0][0][k] << endl;

    return 0;
}


