#include <iostream>
#include <cstdio>

using namespace std;

int m, n;
int a[21][21];

int calc(int m, int n);
int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	cin >> m >> n;

	cout << calc(m, n) << endl;
	return 0;
}

int calc(int m, int n) {
	if (m == 1 || n == 1)
		return 1;
	return calc(m - 1, n) + calc(m, n - 1);

}
