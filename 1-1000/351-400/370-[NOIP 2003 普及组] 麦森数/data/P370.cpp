#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int f[1001],p,res[1001],sav[1001];//�˷�Ҫ����������
void result_1()
{
    memset(sav,0,sizeof(sav));
    for(register int i=1;i<=500;i+=1)
        for(register int j=1;j<=500;j+=1)
            sav[i+j-1]+=res[i]*f[j];//�ȼ���ÿһλ�ϵ�ֵ������λ��
    for(register int i=1;i<=500;i+=1)
    {
        sav[i+1]+=sav[i]/10;//���������λ���⣬�����׳���
        sav[i]%=10;
    }
    memcpy(res,sav,sizeof(res));//cstring����ĸ�ֵ��������sav��ֵ����res
}
void result_2()//ֻ����result_1�Ļ����Ͻ�����ϸ΢���޸�
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
    f[1]=2;//�߾��ȸ���ֵ
    while(p!=0)//������ģ��
    {
        if(p%2==1)result_1();
        p/=2;
        result_2();
    }
    res[1]-=1;
    for(register int i=500;i>=1;i-=1)//ע�������ʽ��50����һ�У���һ������
        if(i!=500&&i%50==0)printf("\n%d",res[i]);
        else printf("%d",res[i]);
    return 0;
}
