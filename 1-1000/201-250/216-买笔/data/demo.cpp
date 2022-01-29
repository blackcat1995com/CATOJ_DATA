#include<iostream>
using namespace std;
int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    int a,b,c,x,y; 	     
                     //a,b,c分别表示在买笔方案中，6元、5元和4元钱笔的数目
                    //x，y分别表示剩余班费和买完最多的4元笔后剩的钱
    cin>>x;           //输入x
    c=x/4;             //4元笔最多买的数目
    y=x%4;           //求买完c支4元笔后剩余的钱数y
    switch (y)       //判断购买方案
    {
      case 0: a=0; b=0;       break;
      case 1: a=0; b=1; c--;  break;
      case 2: a=1; b=0; c--;  break;
      case 3: a=1; b=1; c-=2; break; 
    }
    cout<<a<<' '<<b<<' '<<c<<endl;     //三个数间以空格隔开
    return 0;
}
