#include <iostream>
#include <cstdio>
using namespace std;

int n, k;

int sum[100005], cnt[100005];

long long ans = 0;

int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        sum[i] += (sum[i - 1] + x) % k;//   ��ǰ׺�� 
        ans += cnt[sum[i]];//    �����ڴ�֮ǰ����ͬ���ǰ׺�ͣ�ģk�� 
        cnt[sum[i]]++;//    ��ǰ׺��ģk�������ͳ�Ƴ��ִ��� 
    }
    printf("%lld", ans + cnt[0]);
    return 0;
}


