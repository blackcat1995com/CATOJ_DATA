#include <iostream>
#include <cstdio>
using namespace std;

const int N = 210;
int n, ans = 0;
int book[N];
int main() {
 
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= 2 * n; j += i)
			book[j] ^= 1;
	}

	for (int i = 1; i <= 2 * n; i++)
		if (book[i]) ans++;

	cout << ans << endl;

	return 0;
}

