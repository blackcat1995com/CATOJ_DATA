#include <iostream>
#include <cstdio>
using namespace std;

const double PI = 3.14159265358;

int main() {
	
	double r;
	cin >> r;
	
	double L = 2 * r;
	double C = PI * L;
	double S = PI * r * r;
	
	printf("%.4lf %.4lf %.4lf", L, C, S);

	return 0;
}

