#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	string str;
	cin >> str;
	reverse(str.begin(), str.end());

	for(int i = 0; i < str.size(); i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] -= 32;
			cout << char('A' + (str[i] - 'A' + 3) % 26);
		}
		else{
			str[i] += 32;
			cout << char('a' + (str[i] - 'a' + 3) % 26);
		}
	}

	return 0;
}
