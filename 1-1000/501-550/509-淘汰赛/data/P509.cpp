#include <iostream>
#include <cstdio>
#include <unordered_map>
using namespace std;

const int N = 300;

int n;
int idx = 0;
int w[N], nums[N];

unordered_map<int, int> mp;
void buildTree(int p) {

	// ·µ»ØÌõ¼þ
	if (p >= (1 << n)) return;

	buildTree(2 * p);
	buildTree(2 * p + 1);

	int a = w[2 * p], b = w[2 * p + 1];
	
	w[p] = max(a, b);
}

int main() {

	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	
	cin >> n;

	for (int i = 0; i < (1 << n); i++) {
		cin >> w[i + (1 << n)];
		mp[w[i + (1 << n)]] = i + 1;
	}
		
	buildTree(1);
	
	cout << mp[min(w[2], w[3])] << endl;

	return 0;
}

