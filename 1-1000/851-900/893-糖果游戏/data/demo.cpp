# include<cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e; // ���ú��ӵ��ǹ��� 
	cin>>a>>b>>c>>d>>e;
    
	a=a/3;b=b+a;e=e+a;	// 1��С���ѷ��� 
	b=b/3;c=c+b;a=a+b;	// 2��С���ѷ��� 
	c=c/3;d=c+d;b=b+c;	// 3��С���ѷ��� 
	d=d/3;e=d+e;c=c+d;	// 4��С���ѷ��� 
	e=e/3;a=a+e;d=d+e;	// 5��С���ѷ��� 
	printf("%5d%5d%5d%5d%5d\n",a,b,c,d,e); // %4d,��4λ����� 
	return 0;
}
