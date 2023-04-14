#include <iostream>
using namespace std;

int n;

int a[15];
int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		a[x]++;
	}

	int num, max_cnt = -1;
	for (int i = 1; i < 15; i++) {
		if (a[i] > max_cnt) {
			num = i;
			max_cnt = a[i];
		}
	}

	cout << num << " " << max_cnt << endl;


	return 0;
}
