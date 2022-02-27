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
        sum[i] += (sum[i - 1] + x) % k;//   求前缀和 
        ans += cnt[sum[i]];//    加上在此之前与它同余的前缀和（模k后） 
        cnt[sum[i]]++;//    对前缀和模k后的余数统计出现次数 
    }
    printf("%lld", ans + cnt[0]);
    return 0;
}


