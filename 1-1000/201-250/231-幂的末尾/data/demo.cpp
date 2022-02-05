#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int a, b, c = 1;
	cin >> a >> b;
	for (int i = 1; i <= b; i++) {
		c *= a;
		c %= 1000;
	}
	printf("%03d", c);
	
	return 0;
}
