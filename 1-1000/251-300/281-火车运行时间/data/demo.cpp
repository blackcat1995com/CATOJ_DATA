#include<iostream>
#include<cstdio>
using namespace std;
int main()
{

    int start,end;//start������ʱ�䣬end������ʱ�� 
    cin>>start>>end;
    int h1=start/100,h2=end/100;//h1������ʱ��Сʱ��h2����վʱ��Сʱ 
    int m1=start%100,m2=end%100;//m1������ʱ�ķ��ӣ�m2����վʱ�ķ��� 
//    cout << h1 << " " << h2 << endl;
    int m=m2-m1;//���Ӻ�Сʱ�ֱ������� 
    int h=h2-h1;
    if(m<0)//������ӳ��ָ��������������Сʱ�Ľ�λ 
    {
        m=m+60;
        h--;
    }
    printf("%02d:%02d",h,m);//��������������λС�� 
    return 0;
} 
