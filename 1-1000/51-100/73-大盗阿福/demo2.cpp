#include<stdio.h>
#define max(a, b)  a>b?a:b
#define N 100010

int f[N];
int main()
{
    int t;
    scanf("%d", &t);
    while(t --)
    {
        int n;
        scanf("%d", &n);

        int w;
        scanf("%d", &w);
        f[1] = w;
        for(int i = 2; i <= n; i ++)
        {
            scanf("%d", &w);
            f[i] = max(f[i - 1], f[i - 2] + w);
        }

        printf("%d\n", f[n]);
    }
    return 0;
}


