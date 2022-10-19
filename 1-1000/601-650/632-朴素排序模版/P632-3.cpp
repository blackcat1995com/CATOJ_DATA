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

	
	for (int i = 1; i < n; i++) {
		int k = i;
		for (int j = i + 1; j <= n; j++)
			if (a[j] < a[k])
				k = j;
		if (k != i) swap(a[k], a[i]);
	}

	for (int i = 1; i <= n; i++) cout << a[i] << " ";

	return 0;
}


