#include <cstring>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 100010;

int n, m;
int h[N], e[N], ne[N], idx;
int w[N];
int dist[N], cnt[N];//��¼ÿ���㵽���ı�������cnt[i] >= n ��ʾ�����˱���>=���������Ȼ�л�������һ���Ǹ�����
bool st[N];//�жϵ�ǰ�ĵ��Ƿ��Ѿ����뵽���е����ˣ��Ѿ�������еĽ��Ͳ���Ҫ�����İѸõ���뵽��������
//����˴λ��ǻ���µ����ľ��룬��ֻ�ø���һ����ֵ�����ü��뵽���е��С�
//��ζ�ţ�st�����������Ч�ʵ����ã����ں�Ч�ʵĻ���ȥ��Ҳ����

void add(int a, int b, int c)
{
    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx ++ ;
}

int spfa()
{
    //��ʼ�����з��������ľ���
    // memset(dist, 0x3f, sizeof dist);
    // dist[1] = 0;
    // ���ﲻ��Ҫ��ʼ��dist����Ϊ ��������ó�ʼ����ԭ���ǣ� ������ڸ����� ��ôdist���ܳ�ʼ��Ϊ���٣� ���ᱻ����

    //������У�������, ��ǽ���
    queue<int> q;

    for (int i = 1; i <= n; i ++ )
    {
        //�жϸ�����ֻ��һ����������п��ܵ��ﲻ�˸��������Ҫһ��ʼ�Ͱ����н�������У��ұ�ǽ����˶��н���Ч��
        q.push(i);
        st[i] = true;
    }

    //�����еĵ��������������㵽���ľ���
    while (q.size())
    {
        //ȡ��ͷ������ͷ
        auto t = q.front();
        q.pop();
        //t���ӣ���ǳ���
        st[t] = false;

        //������t�ڽӵı�
        for (int i = h[t]; i != -1; i = ne[i])
        {
            int j = e[i];
            if (dist[j] > dist[t] + w[i])
            {
                dist[j] = dist[t] + w[i];//���j����ͨ���м��t���;���
                cnt[j] = cnt[t] + 1;//��ô���j���м��t�Ļ����ϼ�һ�����Լ��ı�

                if (cnt[j] >= n) return true;//������С�ڽ���������ָ�������������

                if (!st[j])//����ʱjû�ڶ����У�����ӡ��Ѿ��ڶ������ˣ������Ѿ���������ֵ���ظ�������н���Ч��
                {
                    //j���ӣ���ǽ���
                    q.push(j);
                    st[j] = true;
                }
            }
        }
    }
    return false;//�ߵ����ˣ�������û��������ζ�ű���һֱС�ڽ�����������ڸ���
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


