#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010;

struct Node {
	char ch;
	int L, R;
}node[N];

int idx = 0;
int q[N];

// 构建二叉树
int buidTree(char ch) {
	if (ch == '.') return 0;

	int p = ++idx;
	//cout << p << " ";
	node[p].ch = ch;
	node[p].L = buidTree(cin.get());
	node[p].R = buidTree(cin.get());

	return p;
}

// 求叶子数
int getLeafNum(int p) {
	if (p == 0) return 0;
	if (node[p].L == 0 && node[p].R == 0) return 1;
	return getLeafNum(node[p].L) + getLeafNum(node[p].R);
}

// 二叉树深度
int getDepth(int p) {

	if (p == 0) return 0;
	return max(getDepth(node[p].L), getDepth(node[p].R)) + 1;
}

// 先序遍历
void preOrder(int p) {
	if (p == 0) return;

	cout << node[p].ch;
	preOrder(node[p].L);
	preOrder(node[p].R);
}

// 中序遍历
void inOrder(int p) {
	if (p == 0) return;
	
	inOrder(node[p].L);
	cout << node[p].ch;
	inOrder(node[p].R);
}

// 后序遍历
void postOrder(int p) {
	if (p == 0) return;

	postOrder(node[p].L);
	postOrder(node[p].R);
	cout << node[p].ch;
}

// 层序遍历
void levelTraverse(int p) {
	int hh = 0, tt = -1;
	cout << node[p].ch;
	q[++tt] = p;

	while (hh <= tt) {
		int t = q[hh++];

		if (node[t].L) {
			cout << node[node[t].L].ch;
			q[++tt] = node[t].L;
		}

		if (node[t].R) {
			cout << node[node[t].R].ch;
			q[++tt] = node[t].R;
		}
	}
}

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int root = buidTree(cin.get());
	//cout << root << endl;

	cout << getDepth(root) << endl << getLeafNum(root) << endl;
	preOrder(root);
	cout << endl;

	inOrder(root);
	cout << endl;

	postOrder(root);
	cout << endl;

	levelTraverse(root);
	cout << endl;

	return 0;
}

// ABD...CE..F..
