#include <iostream>
using namespace std;

int a[100001] = { 1, 1 }, n;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int k = 0;	// k代表进位
		for (int j = 1; j <= a[0]; j++) {
			a[j] = a[j] * i + k;
			k = a[j] / 10;	// k=0 or 1
			a[j] %= 10;
		}
		while (k) {	// 判断每一次乘以2后是否有进位
			a[++a[0]] = k%10;
			k /= 10;
		}
	}

	for (int i = a[0]; i >= 1; i--)
		cout << a[i];
	return 0;
}
