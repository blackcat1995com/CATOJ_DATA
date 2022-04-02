#include <iostream>
#include <cstdio>
using namespace std;

int n;
int a[31] = {0, 1, 2};

int main() {

	scanf("%d", &n);

	for(int i = 3; i <= n; i++)
		a[i] = a[i - 1] + a[i - 2];

	for(int i = 1; i <= n; i++)
		printf("%d ", a[i]);

	return 0;
}
