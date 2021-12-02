#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	char ch;
	cin >> ch;

	if(ch < 65 || ch > 122){
		cout << "not letter" << endl;
		return 0;
	}

	if(ch >= 97) cout << char(ch - 32) << endl;
	else cout << char(ch + 32) << endl;
	
	return 0;
}
