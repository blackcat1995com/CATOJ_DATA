#include <iostream>
#include <cstring>

using namespace std;
int a[1001], b[1001], c[1001];

void init(int a[]);
void arrcpy(int p[], int q[], int k);
int compare(int a[], int b[]);
void sub(int a[], int b[]);
void div(int a[], int b[], int c[]);
void print(int a[]);

int main() {

	init(a);
	init(b);
	div(a, b, c);
	print(c);
	print(a);
	return 0;
}

void init(int a[]) {
	char s[1001];
	cin >> s;
	a[0] = strlen(s);
	for (int i = 1; i <= a[0]; i++)
		a[i] = s[a[0] - i] - '0';
}

void arrcpy(int p[], int q[], int k) {
	for (int i = 1; i <= p[0]; i++)
		q[i + k - 1] = p[i];
	q[0] = p[0] + k - 1;
}

int compare(int a[], int b[]) {
	if (a[0] > b[0])	return 1;
	if (a[0] < b[0])	return -1;
	for (int i = a[0]; i >= 1; i--) {
		if (a[i] > b[i])	return 1;
		if (a[i] < b[i])	return -1;
	}
	return 0;
}

void sub(int a[], int b[]) {
	int ret = compare(a, b);
	if (ret == 0) {
		a[0] = 0;
		return;
	}
	if (ret == 1) {
		for (int i = 1; i <= a[0]; i++) {
			if (a[i] < b[i]) {
				a[i] += 10;
				a[i + 1]--;
			}
			a[i] -= b[i];
		}
		while ((a[a[0]] == 0) && (a[0] >= 1)) a[0]--;
	}
}

void div(int a[], int b[], int c[]) {
	int temp[1001];
	c[0] = a[0] - b[0] + 1;
	for (int i = c[0]; i >= 1; i--) {
		memset(temp, 0, sizeof(temp));
		arrcpy(b, temp, i);
		while (compare(a, temp) >= 0) {
			c[i]++;
			sub(a, temp);
		}
	}

	while ((c[c[0]] == 0) && (c[0] >= 1))
		c[0]--;
}

void print(int a[]) {

	if (a[0] == 0) {
		cout << 0 << endl;
		return;
	}

	for (int i = a[0]; i >= 1; i--) {
		cout << a[i];
	}
	cout << endl;
}
