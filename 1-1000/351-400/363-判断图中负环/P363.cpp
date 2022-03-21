#include <cstring>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 100010;

int n, m;
int h[N], e[N], ne[N], idx;
int w[N];
int dist[N], cnt[N];//记录每个点到起点的边数，当cnt[i] >= n 表示出现了边数>=结点数，必然有环，而且一定是负环！
bool st[N];//判断当前的点是否已经加入到队列当中了；已经加入队列的结点就不需要反复的把该点加入到队列中了
//就算此次还是会更新到起点的距离，那只用更新一下数值而不用加入到队列当中。
//意味着，st数组起着提高效率的作用，不在乎效率的话，去掉也可以

void add(int a, int b, int c)
{
    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx ++ ;
}

int spfa()
{
    //初始化所有非起点和起点的距离
    // memset(dist, 0x3f, sizeof dist);
    // dist[1] = 0;
    // 这里不需要初始化dist数组为 正无穷。不用初始化的原因是， 如果存在负环， 那么dist不管初始化为多少， 都会被更新

    //定义队列，起点进队, 标记进队
    queue<int> q;

    for (int i = 1; i <= n; i ++ )
    {
        //判断负环，只从一个点出发，有可能到达不了负环那里，需要一开始就把所有结点放入队列，且标记进入了队列降低效率
        q.push(i);
        st[i] = true;
    }

    //队列中的点用来更新其他点到起点的距离
    while (q.size())
    {
        //取队头，弹队头
        auto t = q.front();
        q.pop();
        //t出队，标记出队
        st[t] = false;

        //更新与t邻接的边
        for (int i = h[t]; i != -1; i = ne[i])
        {
            int j = e[i];
            if (dist[j] > dist[t] + w[i])
            {
                dist[j] = dist[t] + w[i];//结点j可以通过中间点t降低距离
                cnt[j] = cnt[t] + 1;//那么结点j在中间点t的基础上加一条到自己的边

                if (cnt[j] >= n) return true;//边数不小于结点数，出现负环，函数结束

                if (!st[j])//若此时j没在队列中，则进队。已经在队列中了，上面已经更新了数值。重复加入队列降低效率
                {
                    //j进队，标记进队
                    q.push(j);
                    st[j] = true;
                }
            }
        }
    }
    return false;//走到这了，函数还没结束，意味着边数一直小于结点数，不存在负环
}

int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    scanf("%d%d", &n, &m);
    memset(h, -1, sizeof h);
    for (int i = 0; i < m; i ++ )
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        add(a, b, c);
    }

    if (spfa()) puts("Yes");
    else puts("No");


    return 0;
}


