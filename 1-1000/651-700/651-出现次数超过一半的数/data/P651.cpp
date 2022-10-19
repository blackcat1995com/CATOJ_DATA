#include <iostream>
#include <cstdio>
#include <string>
#include <unordered_map>
using namespace std;

int n;
unordered_map<int, int> mp;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		mp[x] += 1;
	}

	for (auto x : mp)
		if (x.second > n / 2) {
			cout << x.first << endl;
			return 0;
		}

	puts("no");

	return 0;
}
