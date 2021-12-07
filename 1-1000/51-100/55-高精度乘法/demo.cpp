#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int a[1001], b[1001], c[1001];
void init();
void mul();
void print();

int main() {
	
	init();
	mul();
	print();
	return 0;
}

void init() {
	char ac[1001], bc[1001];
	cin >> ac >> bc;
	a[0] = strlen(ac);
	b[0] = strlen(bc);

	// 将被乘数逆序转int
	for (int i = 1; i <= a[0]; i++) {
		a[i] = ac[a[0] - i] - '0';
	}

	// 将乘数逆序转int
	for (int i = 1; i <= b[0]; i++) {
		b[i] = bc[b[0] - i] - '0';
	}
}

void mul() {
	// 对应位相乘，i控制乘数的位数
	for (int i = 1; i <= b[0]; i++) {
		int k = 0;
		for (int j = 1; j <= a[0]; j++) {
			c[i + j - 1] = a[j] * b[i] + k + c[i + j - 1];
			k = c[i + j - 1] / 10;
			c[i + j - 1] %= 10;
		}
		c[i + a[0]] = k;
	}

}

void print() {
	c[0] = a[0] + b[0];
	while (c[c[0]] == 0 && c[0] > 1)
		c[0]--;

	for (int i = c[0]; i >= 1; i--) {
		cout << c[i];
	}
}
