#include <iostream>
using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int n, total, ok;
	cin >> n;
	double jiwei, other;
	for (int i = 1; i <= n; i++) {
		cin >> total >> ok;
		if (i == 1)
			jiwei = ok * 1.0 / total;
		else {
			other = ok * 1.0 / total;
			if ((other - jiwei) > 0.05)
				cout << "better" << endl;
			else if ((jiwei - other) > 0.05)
				cout << "worse" << endl;
			else
				cout << "same" << endl;
		}
	}
	return 0;
}
