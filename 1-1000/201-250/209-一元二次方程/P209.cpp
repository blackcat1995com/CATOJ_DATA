#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	double a, b, c, x1, x2, s, x, delta;
	cin >> a >> b >> c;
	delta = b * b - 4 * a * c;
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	s = -b / (2 * a);

	if (fabs(delta) < 0.001)
		printf("%.3lf\n", s);

	else if (delta > 0) {
		double tx1 = max(x1, x2);
		double tx2 = min(x1, x2);
		printf("%.3lf %.3lf\n", tx1, tx2);
	}

	else
		cout << "NOANSWER" << endl;

	return 0;
}
