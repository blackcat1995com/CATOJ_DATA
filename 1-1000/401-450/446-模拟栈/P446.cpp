#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

const int N = 1e6 + 10;

int n;
int stk[N], top = 0;

int main() {
	
	cin >> n;
	while (n--) {
		string op;
		int x;
		cin >> op;
		if (op == "push") {
			cin >> x;
			stk[++top] = x;
		}
		else if (op == "pop")
			top--;
		else if (op == "empty") {
			if (top) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
		else {
			cout << stk[top] << endl;
		}
	}

	return 0;
}


