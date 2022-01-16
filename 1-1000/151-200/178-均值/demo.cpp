#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	
	int n;
	double data, sum = 0.0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> data;
		sum += data;
	}
	printf("%.4lf", sum / n);
	
	return 0;
}
