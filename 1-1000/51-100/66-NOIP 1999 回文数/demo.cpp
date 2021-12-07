#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int a[1001], n, cnt = 0;
void init();
bool checkIsHuiWenShu();
void add();

int main() {

	init();
	if (checkIsHuiWenShu()) {
		printf("STEP=%d", 0);
		return 0;
	}
	while (cnt <= 30) {
		cnt++;
		add();
		if (checkIsHuiWenShu()) {
			printf("STEP=%d", cnt);
			return 0;
		}

	}

	cout << "Impossible!";

	return 0;
}

void init() {
	char ac[1001];
	cin >> n >> ac;
	a[0] = strlen(ac);
	for (int i = 1; i <= a[0]; i++) {
		if (ac[a[0] - i] >= '0' && ac[a[0] - i] <= '9') {
			a[i] = ac[a[0] - i] - '0';
		}
		else if (ac[a[0] - i] >= 'a' && ac[a[0] - i] <= 'z') {
			a[i] = ac[a[0] - i] - 'a' + 10;
		}
		else {
			a[i] = ac[a[0] - i] - 'A' + 10;
		}
	}
}

bool checkIsHuiWenShu() {
	for (int i = 1; i <= a[0] / 2; i++) {
		if (a[i] != a[a[0] - i + 1])
			return false;
	}
	return true;
}

void add() {
	int b[1001], k = 0;

	for (int i = 1; i <= a[0]; i++) {
		b[i] = a[a[0] - i + 1];
	}
	for (int i = 1; i <= a[0]; i++) {
		a[i] = a[i] + b[i] + k;
		k = a[i] / n;
		a[i] %= n;
	}
	if (k) {
		a[++a[0]] = k;
	}
}
