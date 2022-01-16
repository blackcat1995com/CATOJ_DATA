#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n, sum=0;
	double data;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> data;
		sum += data;
	}
	printf("%d %.5lf", sum, sum*1.0 / n);
	return 0;
}
