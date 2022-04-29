#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int n, ans;	
void calc(int pre, int k);	// 30=2*15  15=3*5
int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	cin >> n;
	while (n--) {
		int k;
		cin >> k;
		ans = 1;
		calc(1, k);
		cout << ans << endl;
	}
	return 0;
}

void calc(int pre, int k) {
	for (int i = 2; i <= sqrt(k); i++) {
		if (k % i == 0 && i >= pre && k / i >= pre) {
			ans++;
			calc(i, k / i);
		}
	}
}
