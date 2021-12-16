#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;
int n, p, c;
const int INF = 0x7fffffff;
const int N = 3005;

struct Edge {
	int to;
	int w;
};

bool book[N];
int dis[N];
int b[N];
vector<Edge> head[N];

int SPFA(int k);
int main() {
	cin >> n >> p >> c;
	for (int i = 1; i <= n; i++)
		cin >> b[i];	// b[i] �洢ÿһͷ��ţ����������
	for (int i = 1; i <= c; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		Edge e1, e2;
		e1.to = v;	e1.w = w;
		e2.to = u;  e2.w = w;
		head[u].push_back(e1);
		head[v].push_back(e2);
	}
	int minnum = INF;
	for (int i = 1; i <= p; i++)
		minnum = min(minnum, SPFA(i));
	cout << minnum;
	return 0;
}

int SPFA(int k) {
	memset(dis, 0x7f, sizeof(dis));
	dis[k] = 0;
	queue<int> que;
	que.push(k);
	book[k] = true;

	while (!que.empty()) {
		int cur = que.front();
		book[cur] = false;
		for (int i = 0; i < head[cur].size(); i++) {
			Edge e = head[cur][i];
			if (dis[e.to] > dis[cur] + e.w) {
				dis[e.to] = dis[cur] + e.w;
				if(!book[e.to]){
					que.push(e.to);
					book[e.to] = true;
				}
			}
		}
		que.pop();
	}
	int total = 0;
	for (int i = 1; i <= n; i++)
		total += dis[b[i]];
	return total;
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
