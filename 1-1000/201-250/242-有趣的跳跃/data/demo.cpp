#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
/*
4 
1 4 2 3
*/
int a[3005], b[3005];
int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	// a[n] = 0 1 4 2 3
	// -3 2 -1
	// 3 2 1
	// abs(-1)
	//cout << abs(-3) << endl;
	for (int i = 2; i <= n; i++)
		b[i - 1] = abs(a[i] - a[i - 1]);
	// b[n-1] = 0, 3 2 1
	/*for (int i = 1; i <= n - 1; i++)
		cout << b[i] << " ";*/
	sort(b + 1, b + n);
	// 1 2 4

	for (int i = 1; i <= n - 1; i++) {
		if (b[i] != i) {
			cout << "Not jolly";
			return 0;
		}
	}
	cout << "Jolly";
	return 0;
}
