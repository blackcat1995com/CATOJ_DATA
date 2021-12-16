#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	double n, m;
	scanf("%lf%lf", &n, &m);

	n -= m * 0.8;

	printf("%.2lf\n", n);

	return 0;
}

