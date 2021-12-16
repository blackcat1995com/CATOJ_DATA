#include <iostream>
#include <queue>
#include <cstring>
#include <cmath>
using namespace std;
int n, p, c;
const int INF = 0x7fffffff;
const int N = 3005;
struct Edge {
	int next;	// 下一条边的编号
	int to;		// 这条边到达的点
	int w;	    // 这条变权重
}edge[N];

int num_edge = 0;
int head[N], dis[N], b[N];
bool book[N];
queue<int> que;

void add_edge(int from, int to, int w);
int main() {
	cin >> n >> p >> c;
	for (int i = 1; i <= n; i++)
		cin >> b[i];	// b[i] 存储每一头奶牛所在牧场号
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
		que.push(i);	// 第i个牧场作为队首，入队
		while (!que.empty()) {
			int cur = que.front();	// 获取队首元素
			book[cur] = false;
			int i = head[cur];	// i下一条边的编号
			while (i) {
				int np = edge[i].to;	// 当前边的终点
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
			total += dis[b[j]];  //把每头牛所在的牧场的最短路径加起来 
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
第一行: 三个数：奶牛数N，牧场数P（2≤P≤800），牧场间道路数C(1≤C≤1450)。
第二行到第N+1行: 1到N头奶牛所在的牧场号。
第N+2行到第N+C+1行：每行有三个数：相连的牧场A、B，两牧场间距（1≤D≤255），当然，连接是双向的。

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