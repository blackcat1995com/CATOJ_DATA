#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

struct BNode {
	char ch;
	int lchild, rchild;
} node[101];

int root = 0, cnt = 0;

// ���������� 
int buildTree(int T);
// �������
void inOrder(int T);
// �������
void postOrder(int T);
int main()
{
	root = buildTree(0);
	inOrder(root);
	cout << endl;
	postOrder(root);
	//cout << root << endl;
	return 0;
}

// ���������� ABD..EF..G..C..
int buildTree(int T) {
	char ch;
	cin >> ch;
	if (ch == '.') {
		return 0;
	}

	else {
		T = ++cnt;
		node[T].ch = ch;
		node[T].lchild = buildTree(T);
		node[T].rchild = buildTree(T);
	}
	return T;
}

// �������
void inOrder(int T) {
	if (T) {
		inOrder(node[T].lchild);
		cout << node[T].ch;
		inOrder(node[T].rchild);
	}
}
// �������
void postOrder(int T) {
	if (T) {
		postOrder(node[T].lchild);
		postOrder(node[T].rchild);
		cout << node[T].ch;
	}
}
