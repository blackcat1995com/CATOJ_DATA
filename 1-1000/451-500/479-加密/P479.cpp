#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
 
	string str;
	cin >> str;
	for (auto x : str)
		cout << char(x + 3);

	return 0;
}
