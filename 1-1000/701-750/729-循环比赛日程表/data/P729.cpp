#include <iostream>
#include <cmath>
using namespace std;
const int length = 1010;
int table[length][length];
void px(int row, int column, int n) {
	if (n == 1) {
		return;
	}
	int half = n / 2;
	table[row + half][column + half] = table[row][column];
	table[row][column + half] = table[row + half][column] = table[row][column] + half;
	px(row, column, half);
	px(row, column + half, half);
	px(row + half, column, half);
	px(row + half, column + half, half);
}


int main() {
	freopen("5.in", "r", stdin);
	freopen("5.out", "w", stdout);
	int n;
	cin >> n;
	n = pow(2, n);
	table[0][0] = 1;
	px(0, 0, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << table[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

