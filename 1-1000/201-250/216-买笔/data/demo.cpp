#include<iostream>
using namespace std;
int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    int a,b,c,x,y; 	     
                     //a,b,c�ֱ��ʾ����ʷ����У�6Ԫ��5Ԫ��4ԪǮ�ʵ���Ŀ
                    //x��y�ֱ��ʾʣ���Ѻ���������4Ԫ�ʺ�ʣ��Ǯ
    cin>>x;           //����x
    c=x/4;             //4Ԫ����������Ŀ
    y=x%4;           //������c֧4Ԫ�ʺ�ʣ���Ǯ��y
    switch (y)       //�жϹ��򷽰�
    {
      case 0: a=0; b=0;       break;
      case 1: a=0; b=1; c--;  break;
      case 2: a=1; b=0; c--;  break;
      case 3: a=1; b=1; c-=2; break; 
    }
    cout<<a<<' '<<b<<' '<<c<<endl;     //���������Կո����
    return 0;
}
