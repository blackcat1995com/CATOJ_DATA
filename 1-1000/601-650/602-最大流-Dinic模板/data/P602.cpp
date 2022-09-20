#include <iostream>
#include <cstring>

using namespace std;

const int N = 10010, M = 200010, INF = 1e8;

int n, m, S, T;  // ������������Դ�㡢���
int h[N], e[M], f[M], ne[M], idx;
int q[N];  // bfsʹ�õ��Ķ���
int d[N];  // ���ڷֲ�ͼ�еı��(���ʾ��ǵ�Դ�����·��, S��S����Ϊ0)
int cur[N];  // �Ż�����ǰ���Ż�, �洢�ӵ�ǰ�ڵ㿪ʼ����Ҫ�����ĵ�ı��

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
            if (d[ver] == -1 && f[i]) {  // ����·Ҫ��f[i]>0
                d[ver] = d[t] + 1;
                cur[ver] = h[ver];
                if (ver == T) return true;
                q[++tt] = ver;
            }
        }
    }
    return false;
}

// �����S����ǰ��u�����������������Ϊlimit
int find(int u, int limit) {

    if (u == T) return limit;  // S��T�����������Ϊlimit
    int flow = 0;  // ��u��ʼ�����������������

    // i = cur[u] ����ǰ���u��ȥ���Ѿ�������·��
    // flow < limit ˵�����б�Ҫ�Ѵ�u��ȥ��ʣ��ı�
    for (int i = cur[u]; ~i && flow < limit; i = ne[i]) {
        // �������ѭ����˵���ѵ���u��ȥ���Ϊi�Ļ�(��)
        // ����˵��ǰ���uָ��ȥ�Ļ��Ѿ���������, ��Щ���������Ѿ���"ե��"��
        // ���dinic��һ�ε���findʱ��ֱ�Ӵ�i��ʼ�Ѽ���
        cur[u] = i;  // ��ǰ���Ż�!

        int ver = e[i];
        if (d[ver] == d[u] + 1 && f[i]) {
            int t = find(ver, min(f[i], limit - flow));
            // t==0 ˵�������ҵ���ver��T������·
            // �����һ�α�����verʱֱ����������, ��d[ver]���Ϊ-1����
            if (!t) d[ver] = -1;
            f[i] -= t, f[i ^ 1] += t, flow += t;  // ���²в�����
        }
    }
    return flow;
}

int dinic() {

    int r = 0, flow;  // r: �������С  flow: ÿ�������������ӵ�����
    // bfs�����ֲ�ͼ�����з���������·, ���ҳ����е�����·, �������ܹ����ӵ������ӵ�����
    // ���ﲻ��ֻ����һ��bfs����Ȼ���find����ѭ��, ��Ϊfind��ʹ�ò�������ı䣬�´εõ��ķֲ�ͼ�᲻ͬ
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
