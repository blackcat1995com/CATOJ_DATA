// 上海 长寿 徐筵彭 邻接表
#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

const int N = 35, M = 210;
int n, m;

//int h[N], to[M], ne[M], idx = 0;
bool book[N];
int q[N];
vector<int> h[N];
//void add(int a, int b) {
//	to[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}

// 深搜
void dfs(int u) {
	/*cout << u << " ";
	book[u] = true;*/
	for (auto v : h[u]) {
		if (!book[v]) {
			book[v] = true;
			cout << v << " ";
			dfs(v);
		}
	}
}

void bfs() {
	memset(book, 0, sizeof book);

	int hh = 0, tt = -1;

	book[1] = true;
	cout << 1 << " ";
	q[++tt] = 1;


	while (hh <= tt) {
		int t = q[hh++];
		for (auto v : h[t]) {
			if (!book[v]) {
				book[v] = true;
				q[++tt] = v;
				cout << v << " ";
			}
		}
	
	}
}

int main() {
	freopen("8.in", "r", stdin);
	freopen("8.out", "w", stdout);
	cin >> n >> m;
	while (m--) {
		int f, t;
		cin >> f >> t;
		h[f].push_back(t);
	}

	book[1] = true;
	cout << 1 << " ";
	dfs(1);
	cout << endl;

	bfs();

	return 0;
}
