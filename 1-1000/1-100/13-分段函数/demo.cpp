#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {

	double x;
	while(scanf("%lf", &x) == 1){
		if(x > 0) printf("%.6lf\n", exp(-x));
		else if(x == 0) printf("%.6lf\n", 1.0);
		else printf("%.6lf\n", -exp(x));
	}

	return 0;
}
