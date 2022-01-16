#include <iostream>
using namespace std;

int main() {
	int m, n, ans=0;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if (i % 17 == 0)
			ans += i;
	}
	cout << ans;
	return 0;
}
