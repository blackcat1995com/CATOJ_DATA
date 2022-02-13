#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);

	string str;
	cin >> str;
	reverse(str.begin(), str.end());
	// cout << str << endl;

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

	// cout << str << endl;
	return 0;
}

/*
ÊäÈë£ºGSOOWFASOq
Êä³ö£ºTrvdizrrvj
*/

