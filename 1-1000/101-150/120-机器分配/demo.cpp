#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 20;

/*
    ���鱳����
        �飺ÿ���ֹ�˾����һ����
        �ֹ�˾ѡ1,2,3,...̨�豸����һ��ѡ������ֻ����һ��ѡ������ÿ��ֻ��ѡһ�֣�


    ״̬��ʾ��f[i][j]��ʾֻ��ǰi������ѡ�����������j��ѡ���ļ��ϣ����ԣ����ֵ��
        �飺�ֹ�˾ ������豸 ��ֵ��ӯ��
    ״̬���㣺
        f[i][j] = max(f[i][j], f[i - 1][j - k] + w[i][k]) ��k = 0,1,2,3...j��
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

    // ����Ϸ�����
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


