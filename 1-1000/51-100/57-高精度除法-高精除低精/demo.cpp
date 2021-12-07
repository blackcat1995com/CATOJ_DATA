#include <iostream>
#include <cstring>

using namespace std;
int a[1001], b, c[1001], d;
void init();
void div();
void print();
int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	init();
	div();
	print();
	return 0;
}

void init() {
	char ac[1001];
	cin >> ac >> b;
	a[0] = strlen(ac);
	for (int i = 0; i < a[0]; i++)
		a[i + 1] = ac[i] - '0';
	
}

void div() {
	int k = 0;
	for (int i = 1; i <= a[0]; i++) {
		c[i] = k * 10 + a[i];
		k = c[i] % b;
		c[i] /= b;
	}
	d = k;
}
void print() {
	int i_start = 1;
	while (c[i_start] == 0 && i_start < a[0])
		i_start++;
	for (int i = i_start; i <= a[0]; i++)
		cout << c[i];
	cout << endl << d << endl;
}
