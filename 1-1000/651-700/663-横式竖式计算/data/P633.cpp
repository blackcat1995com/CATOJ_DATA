#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int a, b;

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);

	cin >> a >> b;

	int c = a + b;

	cout << a << "+" << b << "=" << c << endl;
	cout << setw(7) << a << endl;
	cout << "+" << setw(6) << b << endl;
	cout << "-------" << endl;
	cout << setw(7) << c << endl;

	return 0;
}

