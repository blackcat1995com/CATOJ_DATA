#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  
  	double a, b, c;
  	cin >> a >> b >> c;
  	double p = (a + b + c) * 1.0 / 2;
  	
  	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	
  	printf("%.3f\n", s);
	return 0;
}
