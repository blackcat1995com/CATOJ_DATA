#include<iostream>
#include<cstdio>
using namespace std;
int main()
{

    int start,end;//start代表发车时间，end代表到达时间 
    cin>>start>>end;
    int h1=start/100,h2=end/100;//h1代表发车时的小时，h2代表到站时的小时 
    int m1=start%100,m2=end%100;//m1代表发车时的分钟，m2代表到站时的分钟 
//    cout << h1 << " " << h2 << endl;
    int m=m2-m1;//分钟和小时分别做减法 
    int h=h2-h1;
    if(m<0)//如果分钟出现负数，处理分钟与小时的借位 
    {
        m=m+60;
        h--;
    }
    printf("%02d:%02d",h,m);//输出结果，保留两位小数 
    return 0;
} 
