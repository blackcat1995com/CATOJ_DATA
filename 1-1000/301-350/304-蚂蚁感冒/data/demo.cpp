#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;

const int N=55;

int n;
int x[N];
//两只蚂蚁相撞再各自返回可以看成两只蚂蚁虽然相撞但方向未改变，但要考虑是否感染
int main(){
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    cin>>n;
    for(int i=0;i<n;i++)cin>>x[i];

    int left=0,right=0;
    for(int i=1;i<n;i++){//分别表示左边向右走，和右边向左走的蚂蚁数量
        if(abs(x[i])<abs(x[0])&&x[i]>0)left++;
        if(abs(x[i])>abs(x[0])&&x[i]<0)right++;

    }
    if(x[0]>0&&right==0||x[0]<0&&left==0)cout<<1<<endl;
    else cout<<right+left+1<<endl;



    return 0;
}


