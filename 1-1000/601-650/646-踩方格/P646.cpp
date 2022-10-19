#include <iostream>
#include <cstdio>

using namespace std;

const int N = 25;

int n;
int L[N], R[N], U[N];

int main() {

	cin >> n;
	L[1] = 1, R[1] = 1, U[1] = 1;

	for (int i = 2; i <= n; i++) {
		L[i] = U[i - 1] + L[i - 1];
		R[i] = U[i - 1] + R[i - 1];
		U[i] = U[i - 1] + L[i - 1] + R[i - 1];
	}

	cout << L[n] + R[n] + U[n] << endl;

	return 0;
}
