#include <iostream>

using namespace std;

int a[1001], n, cnt=0;
bool flag;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n - 1; i++) {
		flag = true;
		for (int j = 1; j <= n - i; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				cnt++;
				flag = false;
			}
		}
		if (flag)
			break;
	}

	cout << cnt;
	return 0;
}