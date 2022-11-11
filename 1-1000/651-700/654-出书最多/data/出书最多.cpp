#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int m;
vector<int> v[26];

int maxv = -1, idx = -1;

int main() {
	freopen("5.in", "r", stdin);
	freopen("5.out", "w", stdout);
	cin >> m;

	while (m--) {
		int num;
		string str;
		cin >> num >> str;
		for (auto x : str)
			v[x - 'A'].push_back(num);
	}

	int a = 1;
	for (int i = 0; i < 26; i++) {
		int len = v[i].size();
		if (len > maxv) {
			maxv = len;
			idx = i;
		}
	}

	cout << char(idx + 'A') << endl << maxv << endl;

	for (auto x : v[idx]) cout << x << endl;

	return 0;
}
