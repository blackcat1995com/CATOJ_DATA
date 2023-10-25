#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	char ch;
	cin >> ch;
	
	if(ch >= 'a' && ch <= 'z')
		cout << char(ch - 32) << endl;

	return 0;
}

