#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e4 + 10;

int n;
int a[N];

int res = 0;

int main() {

	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];

	for (int i = 2; i <= n; i++) {
		int t = a[i];
		int k = 1;
		while (a[k] <= t && k < i) k++;
		for (int j = i; j > k; j--) a[j] = a[j - 1];
		a[k] = t;
	}

	for (int i = 1; i <= n; i++) cout << a[i] << " ";

	return 0;
}


