#include<cstdio>
using namespace std;
const int maxm=2001,maxn=31;
int n,m,v,i;
int c[maxn],w[maxn];
int f[maxm];

int main()
{
    scanf("%d%d",&m,&n);            //��������m����Ʒ����n
    for(i=1;i<=n;i++)                  //��������m����Ʒ����n
        scanf("%d%d",&w[i],&c[i]);
    for(i=1;i<=n;i++)
        for(v=w[i];v<=m;v++)          //�� f[v]��ʾ����������v���������ֵ
            if(f[v-w[i]]+c[i]>f[v])  f[v]=f[v-w[i]]+c[i];
    printf("max=%d\n",f[m]);           // f[m]Ϊ���Ž�
    return 0;
}


