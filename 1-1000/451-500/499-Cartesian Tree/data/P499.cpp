#include <iostream>
#include <cstdio>
using namespace std;

const int N = 50;

int n;
int stk[N], top = 0;
int w[N], L[N], R[N];
bool have_fa[N];
int root = -1;

int q[N], hh = 0, tt = -1;

void bfs(int root) {
	q[++tt] = root;
	while (hh <= tt) {
		int t = q[hh++];
		if (L[t]) q[++tt] = L[t];
		if (R[t]) q[++tt] = R[t];
	}
    
    cout << w[q[0]];
	for (int i = 1; i < n; i++) cout << " " << w[q[i]];
}

int main() {

	cin >> n;
	for (int i = 1; i <= n; i++) cin >> w[i];

	for (int i = 1; i <= n; i++) {
		int k = top;
		while (k > 0 && w[stk[k]] > w[i]) k--;
		if (k) R[stk[k]] = i, have_fa[i] = true;
		if (k < top) L[i] = stk[k + 1], have_fa[stk[k + 1]] = true;
		stk[++k] = i;
		top = k;
	}

	for(int i = 1; i <= n; i++)
		if (!have_fa[i]) {
			root = i;
			break;
		}

	bfs(root);

	return 0;
}

