#include <iostream>
using namespace std;

int a[100001] = { 1, 1 }, n;
int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int k = 0;	// k�����λ
		for (int j = 1; j <= a[0]; j++) {
			a[j] = a[j] * 2 + k;
			k = a[j] / 10;	// k=0 or 1
			a[j] %= 10;
		}
		if (k) {	// �ж�ÿһ�γ���2���Ƿ��н�λ
			a[++a[0]] = k;
		}
	}

	for (int i = a[0]; i >= 1; i--)
		cout << a[i];
	return 0;
}
