#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n, age, sum = 0;
	double ans;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> age;
		sum += age;
	}
	ans = sum * 1.0 / n;
	printf("%.2lf", ans);
	return 0;
}
