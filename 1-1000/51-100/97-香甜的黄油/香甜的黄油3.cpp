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
	cin >> n >> p >> c;  //������ţ��n��������p���������·��c 
	for (int i = 1; i <= p; i++)//��ʼ�� 
	{
		for (int j = 1; j <= p; j++)
			w[i][j] = maxn;  //��������Ĭ�Ϻܴ� 
	}
	for (int i = 1; i <= n; i++)
		cin >> b[i];  //ÿͷ��ţ�������� 
	int x, y, t;
	for (int i = 1; i <= c; i++)    //�ڽӾ���洢
	{
		cin >> x >> y >> t;
		w[y][x] = w[x][y] = t; //���������� 
		a[x][++num[x]] = y;    //��¼һ����ֱ�������ĵ� 
		a[y][++num[y]] = x;
	}

	int minnum = maxn;
	int head, tail, tot, u;//uΪ������ǰ���ֵ���������� 
	for (int i = 1; i <= p; i++)
	{
		for (int j = 1; j <= p; j++) dis[j] = maxn;    //ÿ��������ʼ��Ϊ��� 
		memset(q, 0, sizeof(q));                       //���������ʼ��
		memset(book, false, sizeof(book));             //book��־��ʼ��
		dis[i] = 0;
		q[1] = i;
		head = 0;
		tail = 1;
		book[i] = true;  //��ʼ�����
		while (head < tail)
		{
			head++;

			u = q[head];
			book[u] = false;
			for (int j = 1; j <= num[u]; j++)  //������u��������������
				if (dis[a[u][j]] > dis[u] + w[u][a[u][j]])  //�ɳڲ��� 
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
			tot += dis[b[j]];  //��ÿͷţ���ڵ����������·�������� 
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
