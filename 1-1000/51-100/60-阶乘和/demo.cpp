#include <iostream>
using namespace std;

int a[1000001] = { 1, 1 }, sum[1000001] = {1}, n;

void fact(int n);
void add();
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		fact(i);
		add();
	}


	for (int i = sum[0]; i >= 1; i--)
		cout << sum[i];

	return 0;
}

void fact(int n) {
	int k = 0;	// k�����λ
	for (int j = 1; j <= a[0]; j++) {
		a[j] = a[j] * n + k;
		k = a[j] / 10;	// k=0 or 1
		a[j] %= 10;
	}
	while (k) {	// �ж�ÿһ�γ���2���Ƿ��н�λ
		a[++a[0]] = k % 10;
		k /= 10;
	}

	
}

void add() {
	if (a[0] > sum[0])
		sum[0] = a[0];
	int k = 0;
	for (int i = 1; i <= sum[0]; i++) {
		sum[i] = sum[i] + a[i] + k;
		k = sum[i] / 10;
		sum[i] %= 10;
	}

	if (k) {
		sum[++sum[0]] = k;
	}
}