#include <iostream>
using namespace std;

int main() {
	int n, score, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> score;
		if (score > ans)
			ans = score;
	}
	cout << ans;
	return 0;
}
