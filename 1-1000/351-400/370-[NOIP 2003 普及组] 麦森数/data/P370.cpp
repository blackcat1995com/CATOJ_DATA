#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int f[1001],p,res[1001],sav[1001];//乘法要开两倍长度
void result_1()
{
    memset(sav,0,sizeof(sav));
    for(register int i=1;i<=500;i+=1)
        for(register int j=1;j<=500;j+=1)
            sav[i+j-1]+=res[i]*f[j];//先计算每一位上的值（不进位）
    for(register int i=1;i<=500;i+=1)
    {
        sav[i+1]+=sav[i]/10;//单独处理进位问题，不容易出错
        sav[i]%=10;
    }
    memcpy(res,sav,sizeof(res));//cstring库里的赋值函数，把sav的值赋给res
}
void result_2()//只是在result_1的基础上进行了细微的修改
{
    memset(sav,0,sizeof(sav));
    for(register int i=1;i<=500;i+=1)
        for(register int j=1;j<=500;j+=1)
            sav[i+j-1]+=f[i]*f[j];
    for(register int i=1;i<=500;i+=1)
    {
        sav[i+1]+=sav[i]/10;
        sav[i]%=10;
    }
    memcpy(f,sav,sizeof(f));
}
int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    scanf("%d",&p);
    printf("%d\n",(int)(log10(2)*p+1));
    res[1]=1;
    f[1]=2;//高精度赋初值
    while(p!=0)//快速幂模板
    {
        if(p%2==1)result_1();
        p/=2;
        result_2();
    }
    res[1]-=1;
    for(register int i=500;i>=1;i-=1)//注意输出格式，50个换一行，第一个不用
        if(i!=500&&i%50==0)printf("\n%d",res[i]);
        else printf("%d",res[i]);
    return 0;
}
