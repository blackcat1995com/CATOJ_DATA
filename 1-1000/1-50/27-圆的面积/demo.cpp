#include <iostream>
#include <cstdio>
using namespace std;

const double PI = 3.14159265358979323;

int r;

int main() {
	
	scanf("%d", &r);

	double ans = PI * r * r;

	printf("%.7lf\n", ans);

	return 0;
}
