#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 5e5+5;
int n, m, a[N], Max[N][30]; // n个数 m次询问 a原数组  Max ST表 
map <int,int> pre; // 前面相同的数出现的位置
int main()
{
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++)
    {
        int val;
        scanf("%d", &val);
        Max[i][0] = pre[val]; // 长度为1时，初始化前面与自己相同的数的位置 0 0 0 0 1
        pre[val] = i; // 相同的数出现的最后的位置
    }

    int t = log2(n); // 划分区间的长度 2^1 ~ 2^t
    for(ll j = 1; j <= t; j++) 
    {
        for(ll i = 1; i <= n-(1<<j)+1; i++) // 遍历每个区间
        {
            
            Max[i][j] = max(Max[i][j-1], Max[i+(1<<(j-1))][j-1]); // 合并两个相同的数出现的更远的位置
        }
        cout << endl;
    }
    while(m--)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        ll k = log2(r-l+1);
        ll res = max(Max[l][k], Max[r-(1<<k)+1][k]);
        if(res < l) printf("1\n");
        else printf("0\n");
    }
    return 0;
}