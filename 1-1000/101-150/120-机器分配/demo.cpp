#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 20;

/*
    分组背包：
        组：每个分公司就是一个组
        分公司选1,2,3,...台设备都是一种选法，且只能有一种选法！即每组只能选一种！


    状态表示：f[i][j]表示只从前i个组中选，体积不超过j的选法的集合！属性：最大值！
        组：分公司 体积：设备 价值：盈利
    状态计算：
        f[i][j] = max(f[i][j], f[i - 1][j - k] + w[i][k]) （k = 0,1,2,3...j）
*/

int n, m, f[N][N], w[N][N], path[N];

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i ++)
        for(int j = 1; j <= m; j ++)
            cin >> w[i][j];

    for(int i = 1; i <= n; i ++)
        for(int j = 0; j <= m; j ++)
            for(int k = 0; k <= j; k ++)
                f[i][j] = max(f[i][j], f[i - 1][j - k] + w[i][k]);

    cout << f[n][m] << endl;

    // 输出合法方案
    int j = m;
    for(int i = n; i > 0; i --)
        for(int k = 0; k <= j; k ++){
            if(f[i][j] == f[i - 1][j - k] + w[i][k]){
                path[i] = k, j -= k;
                break;
            }
        }

    for(int i = 1; i <= n; i ++) cout << i << " " << path[i] << endl;
    return 0;
}


