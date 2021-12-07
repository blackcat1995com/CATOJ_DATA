#include <iostream>
#include <cstdio>

using namespace std;

int a[1001], num, n, cnt=0;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num;
		a[num]++;
		if (a[num] == 1)
			cnt++;
	}

	cout << cnt << endl;

	for (int i = 1; i <= 1000; i++) {
		if (a[i] > 0) {
			cout << i << " ";
		}
	}

	return 0;
}
