#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

const int maxn = 0x7fffffff / 3;
int a[801][801], b[801], dis[801], num[801], w[801][801], q[10001];
bool book[801];

int main()
{

	int n, p, c;
	cin >> n >> p >> c;  //输入奶牛数n，牧场数p，牧场间道路数c 
	for (int i = 1; i <= p; i++)//初始化 
	{
		for (int j = 1; j <= p; j++)
			w[i][j] = maxn;  //牧场距离默认很大 
	}
	for (int i = 1; i <= n; i++)
		cin >> b[i];  //每头奶牛的牧场号 
	int x, y, t;
	for (int i = 1; i <= c; i++)    //邻接矩阵存储
	{
		cin >> x >> y >> t;
		w[y][x] = w[x][y] = t; //两牧场距离 
		a[x][++num[x]] = y;    //记录一个点直接相连的点 
		a[y][++num[y]] = x;
	}

	int minnum = maxn;
	int head, tail, tot, u;//u为队列最前面的值（牧场）， 
	for (int i = 1; i <= p; i++)
	{
		for (int j = 1; j <= p; j++) dis[j] = maxn;    //每个牧场初始化为最大 
		memset(q, 0, sizeof(q));                       //队列数组初始化
		memset(book, false, sizeof(book));             //book标志初始化
		dis[i] = 0;
		q[1] = i;
		head = 0;
		tail = 1;
		book[i] = true;  //起始点入队
		while (head < tail)
		{
			head++;

			u = q[head];
			book[u] = false;
			for (int j = 1; j <= num[u]; j++)  //遍历与u相连的其它牧场
				if (dis[a[u][j]] > dis[u] + w[u][a[u][j]])  //松弛操作 
				{
					dis[a[u][j]] = dis[u] + w[u][a[u][j]];
					if (!book[a[u][j]])
					{
						q[++tail] = a[u][j];
						book[a[u][j]] = true;
					}
				}
		}
		tot = 0;
		for (int j = 1; j <= n; j++)
			tot += dis[b[j]];  //把每头牛所在的牧场的最短路径加起来 
		if (tot < minnum) 
			minnum = tot;
	}
	cout << minnum;
	return 0;
}
/*
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
