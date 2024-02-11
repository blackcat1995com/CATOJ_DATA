# include<cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e; // 设置孩子的糖果数 
	cin>>a>>b>>c>>d>>e;
    
	a=a/3;b=b+a;e=e+a;	// 1号小朋友分糖 
	b=b/3;c=c+b;a=a+b;	// 2号小朋友分糖 
	c=c/3;d=c+d;b=b+c;	// 3号小朋友分糖 
	d=d/3;e=d+e;c=c+d;	// 4号小朋友分糖 
	e=e/3;a=a+e;d=d+e;	// 5号小朋友分糖 
	printf("%5d%5d%5d%5d%5d\n",a,b,c,d,e); // %4d,按4位宽输出 
	return 0;
}
