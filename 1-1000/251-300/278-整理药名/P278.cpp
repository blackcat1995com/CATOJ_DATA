#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	int n;
	cin >> n;
	while(n--){
		string str;
		cin >> str;
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		if((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))
			str[0] -= 32;
	
		cout << str << endl;
	}
	
	return 0;
}


