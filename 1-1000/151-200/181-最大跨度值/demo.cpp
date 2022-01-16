#include <iostream>
using namespace std;

int main() {
	int n, num, maxnum = 0, minnum = 0x7fffffff;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num;
		if (num > maxnum)
			maxnum = num;
		if (num < minnum)
			minnum = num;
	}
	cout << (maxnum - minnum);
	return 0;
}
