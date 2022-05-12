#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010;

int n;
int a[N], f[N];
int ans = 0;

int main() {
 
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		f[i] = 1;
		for (int j = 1; j < i; j++)
			if (a[i] < a[j])
				f[i] = max(f[i], f[j] + 1);
		ans = max(ans, f[i]);
	}

	cout << ans << endl;

	return 0;
}
