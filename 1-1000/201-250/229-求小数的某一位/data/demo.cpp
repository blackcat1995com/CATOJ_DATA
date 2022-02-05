#include <iostream>
using namespace std;

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int a, b, n; 
	cin >> a >> b >> n;
	for (int i = 1; i <= n; i++) {
		a %= b;	
		a *= 10;	
	}
	cout << a / b;
	return 0;
}
