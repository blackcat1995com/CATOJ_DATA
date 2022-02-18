#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int x, y, n1, n2;
	cin >> x >> y >> n1 >> n2;
	double ave = (x * n1 + y * n2) * 1.0 / (n1 + n2);
	printf("%.2lf\n", ave);
	
	return 0;
}

/*
ÊäÈë£º90 88 23 21
Êä³ö£º89.05
*/


