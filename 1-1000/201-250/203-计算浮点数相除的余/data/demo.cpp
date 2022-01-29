#include <iostream>
using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	double a, b, r;
	int k;
	cin >> a >> b;
	k = a / b;
	r = a - k * b;
	cout << r;
	return 0;
}
