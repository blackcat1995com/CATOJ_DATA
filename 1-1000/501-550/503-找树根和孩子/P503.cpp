#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int tree[101];
int main()
{
	int n, m, x, y;
	cin >> n >> m;
	for (int i = 1; i <= m; i++){
		cin >> x >> y;
		tree[y] = x; // y��x�ĺ���
	}

	// Ѱ�Ҹ��ڵ�
	int root;
	for (int i = 1; i <= n; i++){
		if (tree[i] == 0){
			root = i;
			break;
		}
	}
	
	// �ҵ��������Ľڵ�
	int maxroot, cnt = 0, maxcnt = 0;
	for (int i = 1; i <= n; i++){
		cnt = 0;
		for (int j = 1; j <= n; j++){
			if (tree[j] == i)
				cnt++;
		}
		if (cnt > maxcnt){
			maxcnt = cnt;
			maxroot = i;
		}
	}
	cout << root << endl << maxroot << endl;
	for (int i = 1; i <= n; i++){
		if (tree[i] == maxroot)
			cout << i << " ";
	}

	return 0;
}
