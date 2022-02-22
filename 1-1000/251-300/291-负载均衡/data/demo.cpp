#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

#define x first
#define y second

using namespace std;
typedef pair<int, int> PII;

const int N = 200010;

int n,m;
int s[N];//每台计算机算力
priority_queue<PII,vector<PII>,greater<PII> >q[N];//每台计算机任务
//PII <结束时刻,算力>
//!要小根堆
int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; ++ i)scanf("%d",&s[i]);//!下标从1开始
    while (m -- ){
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        while(q[b].size()&&q[b].top().x<=a){//当堆尾的结束时刻小于当前分配时刻
            s[b] += q[b].top().y;//!恢复算力 +
            q[b].pop();//弹出该任务

        }
        if(s[b]<d)puts("-1");//当前算力无法分配
        else{
            q[b].push({a+c,d});//加入任务
            s[b] -= d;//更新算力
            printf("%d\n",s[b]);//输出算力

        }
    }
    return 0;

}


