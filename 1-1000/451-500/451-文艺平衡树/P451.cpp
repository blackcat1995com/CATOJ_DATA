#include <iostream>
#include <cstdio>
using namespace std;

const int N = 100010;

int n, m;

class Node {
public:
	int s[2], p, v;	// s[0]左孩子 s[1]右孩子 p父节点 v值
	int size, flag; // size子树节点个数，flag是否翻转
	void init(int p, int v) {
		this->p = p;
		this->v = v;
		size = 1;
	}
}tr[N];

int root = 0, idx = 0;

void pushup(int x) {
	tr[x].size = tr[tr[x].s[0]].size + tr[tr[x].s[1]].size + 1;
}

void pushdown(int x) {
	if (tr[x].flag) {
		swap(tr[x].s[0], tr[x].s[1]);
		tr[tr[x].s[0]].flag ^= 1;
		tr[tr[x].s[1]].flag ^= 1;
		tr[x].flag = 0;
	}
}

// 右旋和左旋
void rotate(int x) {
	int y = tr[x].p, z = tr[y].p;
	int k = tr[y].s[1] == x;	// k=0 x是y的左儿子 k=1 x是y的右儿子 
	tr[z].s[tr[z].s[1] == y] = x, tr[x].p = z;
	tr[y].s[k] = tr[x].s[k ^ 1], tr[tr[x].s[k ^ 1]].p = y;
	tr[x].s[k ^ 1] = y, tr[y].p = x;
	pushup(y), pushup(x);
}

void splay(int x, int k) {
	while (tr[x].p != k) {
		int y = tr[x].p, z = tr[y].p;
		if (z != k)
			if ((tr[y].s[1] == x) ^ (tr[z].s[1] == y)) rotate(x);
			else rotate(y);
		rotate(x);
	}
	if (!k) root = x;
}

void insert(int v) {
	int u = root, p = 0;
	while (u) {
		p = u;
		u = tr[u].s[v > tr[u].v];
	}
	u = ++idx;
	if (p) tr[p].s[v > tr[u].v] = u;
	tr[u].init(p, v);
	splay(u, 0);
}

int get_k(int k) {
	int u = root;
	while (u) {
		pushdown(u);
		if (tr[tr[u].s[0]].size >= k) u = tr[u].s[0];
		else if (tr[tr[u].s[0]].size + 1 >= k) return u;
		else k -= tr[tr[u].s[0]].size + 1, u = tr[u].s[1];
	}
	return - 1;
}

void in_order(int u) {
	pushdown(u);
	if (tr[u].s[0]) in_order(tr[u].s[0]);
	if (tr[u].v >= 1 && tr[u].v <= n) cout << tr[u].v << " ";
	if (tr[u].s[1]) in_order(tr[u].s[1]);
}

int main() {

	cin >> n >> m;
	for (int i = 0; i <= n + 1; i++) insert(i);

	while (m--) {
		int L, R;
		cin >> L >> R;
		L = get_k(L), R = get_k(R + 2);
		splay(L, 0), splay(R, L);
		tr[tr[R].s[0]].flag ^= 1;
	}

	in_order(root);

	return 0;
}
