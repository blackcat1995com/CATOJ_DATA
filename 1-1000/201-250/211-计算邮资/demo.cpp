#include <iostream>
using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int n, fee = 0;
	char is_urgent;
	cin >> n >> is_urgent;
	if (n <= 1000)
		fee = 8;
	else if (n > 1000) {
		fee = 8 + (n - 1000) / 500 * 4;
		if ((n - 1000) % 500 != 0)
			fee += 4;
	}
	if (is_urgent == 'y')
		fee += 5;
	cout << fee;
	return 0;
}
