#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;

const int N = 5010, M = 10010;
const int INF = 0x3f3f3f3f;

typedef pair<int, int> PII;

struct Node {
	int a, b, w;
};

int n, m;
vector<PII> h[N];
bool book[N];
int dis[N];
// map<int, int> mp;

//PII p[N];
vector<PII> vec;

int res = 0;

int prim() {
	int res = 0;

	memset(dis, 0x3f, sizeof dis);
	map<int, vector<int> > mp;

	dis[1] = 0;

	for (int i = 1; i <= n; i++) {
		int u = -1;
		for (int j = 1; j <= n; j++) {
			if (!book[j] && (u == -1 || dis[j] < dis[u]))
				u = j;
		}
		
		// if (dis[u] == INF) return 0;
		int p = -1, minv = INF;
		for (auto x : h[u]) {
			// x 是 与 u连接的点所在结构体
			if (book[x.first] && x.second < minv) {
				minv = x.second;
				p = x.first;
			}
		}

		//mp[min(u, p)].push_back(max(u, p));
		vec.push_back({ min(u, p), max(u, p) });
		//cout << u << " " << p << endl;
		book[u] = true;
		
		res += dis[u];
		//cout << u << " " << dis[u] << " " << res << endl;
		for (auto e : h[u]) {
			int v = e.first, w = e.second;
			if (!book[v] && dis[v] > w) {
				dis[v] = w;
			}
		}
	}

//	cout << endl;
	/*for (auto x : mp) {
		for (auto y : mp[x.first])
			cout << x.first << " " << y << endl;
	}*/
	sort(vec.begin(), vec.end());
	for (auto x : vec) 
		if(x.first != -1)
			cout << x.first << " " << x.second << endl;

	return res;
}
int main() {
	freopen("5.in", "r", stdin);
	freopen("5.out", "w", stdout);
	cin >> n >> m;
	while (m--) {
		int a, b, w;
		cin >> a >> b >> w;
		h[a].push_back({ b, w });
		h[b].push_back({ a, w });
	}

	
	int res = prim();

	/*if (res) cout << res << endl;
	else cout << "orz" << endl;*/
	//cout << prim() << endl;
	/*if (prim()) cout << prim();
	else cout << "orz" << endl;*/

	return 0;
}


