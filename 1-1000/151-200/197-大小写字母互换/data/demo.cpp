#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	char mystr[101];
	cin.getline(mystr, 101);
	for (int i = 0; i < strlen(mystr); i++) {
		if (mystr[i] >= 'a' && mystr[i] <= 'z') {
			mystr[i] -= 32;
		}
		else if (mystr[i] >= 'A' && mystr[i] <= 'Z') {
			mystr[i] += 32;
		}
	}
	cout << mystr << endl;
	return 0;
}
