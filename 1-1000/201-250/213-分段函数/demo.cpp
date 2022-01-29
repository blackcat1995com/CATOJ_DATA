#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	double x;
	cin >> x;
	if (x >= 0 && x < 5)
		printf("%.3lf", 2.5 - x);
	else if(x>=5&&x<10)
		printf("%.3lf", 2-1.5*(x-3)*(x-3));
	else if(x>=10&&x<20)
		printf("%.3lf", x/2-1.5);
	return 0;
}
