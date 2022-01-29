#include <iostream>
using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int num1, num2;
	char op;
	cin >> num1 >> num2 >> op;
	switch (op) {
	case '+':cout << num1 + num2; break;
	case '-':cout << num1 - num2; break;
	case '*':cout << num1 * num2; break;
	case '/':
		if (num2 != 0)
			cout << num1 / num2;
		else
			cout << "Divided by zero!";
		break;
	default:
		cout << "Invalid operator!";
	}
	return 0;
}
