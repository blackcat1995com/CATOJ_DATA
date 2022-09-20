#include <iostream>
#include <cstring>

using namespace std;

const int N = 10010, M = 200010, INF = 1e8;

int n, m, S, T;  // 点数、边数、源点、汇点
int h[N], e[M], f[M], ne[M], idx;
int q[N];  // bfs使用到的队列
int d[N];  // 点在分层图中的编号(本质就是到源点最短路径, S到S定义为0)
int cur[N];  // 优化：当前弧优化, 存储从当前节点开始还需要遍历的点的编号

void add(int a, int b, int c) {
    e[idx] = b, f[idx] = c, ne[idx] = h[a], h[a] = idx++;
    e[idx] = a, f[idx] = 0, ne[idx] = h[b], h[b] = idx++;
}

bool bfs() {

    int hh = 0, tt = 0;
    memset(d, -1, sizeof d);
    q[0] = S, d[S] = 0, cur[S] = h[S];
    while (hh <= tt) {
        int t = q[hh++];
        for (int i = h[t]; ~i; i = ne[i]) {
            int ver = e[i];
            if (d[ver] == -1 && f[i]) {  // 增广路要求f[i]>0
                d[ver] = d[t] + 1;
                cur[ver] = h[ver];
                if (ver == T) return true;
                q[++tt] = ver;
            }
        }
    }
    return false;
}

// 从起点S到当前点u允许流过的最大流量为limit
int find(int u, int limit) {

    if (u == T) return limit;  // S到T最多流的流量为limit
    int flow = 0;  // 从u开始向后面流的最大的流量

    // i = cur[u] 跳过前面从u出去的已经流满的路径
    // flow < limit 说明还有必要搜从u出去的剩余的边
    for (int i = cur[u]; ~i && flow < limit; i = ne[i]) {
        // 如果进入循环，说明搜到从u出去编号为i的弧(边)
        // 进而说明前面从u指出去的弧已经被搜完了, 这些弧的流量已经被"榨干"了
        // 因此dinic下一次调用find时，直接从i开始搜即可
        cur[u] = i;  // 当前弧优化!

        int ver = e[i];
        if (d[ver] == d[u] + 1 && f[i]) {
            int t = find(ver, min(f[i], limit - flow));
            // t==0 说明不能找到从ver到T的增广路
            // 因此下一次遍历到ver时直接跳过即可, 将d[ver]标记为-1即可
            if (!t) d[ver] = -1;
            f[i] -= t, f[i ^ 1] += t, flow += t;  // 更新残差网络
        }
    }
    return flow;
}

int dinic() {

    int r = 0, flow;  // r: 最大流大小  flow: 每次增广后可以增加的流量
    // bfs建立分层图过程中发现有增广路, 则找出所有的增广路, 将所有能够增加的流量加到答案中
    // 这里不能只进行一遍bfs遍历然后对find进行循环, 因为find会使得残留网络改变，下次得到的分层图会不同
    while (bfs()) while (flow = find(S, INF)) r += flow;
    return r;
}

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    cin >> m >> n;
    S = 1, T = n;
  
    memset(h, -1, sizeof h);
    while (m--) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        add(a, b, c);
    }

    printf("%d\n", dinic());

    return 0;
}
