#include<bits/stdc++.h>
using namespace std;

int t, n, m, a[1005], b[1005], f[1005];

int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    cin >> t;
    while(t--)
    {
        memset(f, 0, sizeof(f));//����һ��Ҫ���㣬���򻹻ᱣ����һ������
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];    
        int maxn = INT_MIN;//�ȴ�С��ʼֵ
        f[1] = b[1];
        for (int i = 2; i <= n; i++)
        {
            f[i] = b[i];
            for (int j = i - 1; j >= 0; j--) 
                if (a[i] - a[j] > m) f[i] = max(f[i], f[j] +b[i]);//������һ��ӵ㣬��ס>m!
        }
        for (int i = 1; i <= n; i++)
            maxn = max(maxn, f[i]);//���ޱȽϣ������ֵ
        cout << maxn << endl;
    }
    return 0;
} 


