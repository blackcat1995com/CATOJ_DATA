#include <iostream>
#include <queue>
#include <cstring>
#include <cmath>
using namespace std;
int n, p, c;
const int INF = 0x7fffffff;
const int N = 3005;
struct Edge {
	int next;	// ��һ���ߵı��
	int to;		// �����ߵ���ĵ�
	int w;	    // ������Ȩ��
}edge[N];

int num_edge = 0;
int head[N], dis[N], b[N];
bool book[N];
queue<int> que;

void add_edge(int from, int to, int w);
int main() {
	cin >> n >> p >> c;
	for (int i = 1; i <= n; i++)
		cin >> b[i];	// b[i] �洢ÿһͷ��ţ����������
	for (int i = 1; i <= c; i++) {
		int from, to, w;
		cin >> from >> to >> w;
		add_edge(from, to, w);
		add_edge(to, from, w);
	}

	int minnum = INF;
	for (int i = 1; i <= p; i++) {
		memset(dis, 0x7f, sizeof(dis));
		dis[i] = 0;
		book[i] = true;
		queue<int> que;
		que.push(i);	// ��i��������Ϊ���ף����
		while (!que.empty()) {
			int cur = que.front();	// ��ȡ����Ԫ��
			book[cur] = false;
			int i = head[cur];	// i��һ���ߵı��
			while (i) {
				int np = edge[i].to;	// ��ǰ�ߵ��յ�
				if (dis[np] > dis[cur] + edge[i].w) {
					dis[np] = dis[cur] + edge[i].w;

					if (!book[np]) {
						que.push(np);
						book[np] = true;
					}
				}
				i = edge[i].next;

			}
			que.pop();
		}
		int total = 0;
		for (int j = 1; j <= n; j++)
			total += dis[b[j]];  //��ÿͷţ���ڵ����������·�������� 
		if (total < minnum)
			minnum = total;

	}
	
	cout << minnum;
	return 0;
}

void add_edge(int from, int to, int w) {
	edge[++num_edge].next = head[from];
	edge[num_edge].to = to;
	head[from] = num_edge;
	edge[num_edge].w = w;
}

/*
��һ��: ����������ţ��N��������P��2��P��800�����������·��C(1��C��1450)��
�ڶ��е���N+1��: 1��Nͷ��ţ���ڵ������š�
��N+2�е���N+C+1�У�ÿ����������������������A��B����������ࣨ1��D��255������Ȼ��������˫��ġ�

3 4 5
2
3
4
1 2 1
1 3 5
2 3 7
2 4 3
3 4 5
*/