#include <iostream>
#include <string>
using namespace std;

int idx = -1;

typedef long long LL;

int calc(string s){
	int res = 0;
	for(int i = 0; i < idx; i++){
		if(isdigit(s[i])){
			int x = 0;
			while(isdigit(s[i]))
				x = x * 10 + s[i++] - '0';
			return x;
		}
	}
}

int main() {

	string s;
	getline(cin, s);
	
	
	for(int i = 0; i < s.size(); i++){
		if(!isdigit(s[i]) && s[i] != ' '){
			idx = i;
			break;
		}	
	}
	
//	cout << idx << endl;
	
	int a = calc(s.substr(0, idx));
	int b = calc(s.substr(idx + 1));
//	cout << a << " " << b << endl;
	if(s[idx] == '+') cout << a + b << endl;
	else if(s[idx] == '-') cout << a - b << endl; 
	else if(s[idx] == '*') cout << a * b << endl;
	else if(s[idx] == '/') cout << a / b << endl;
	else if(s[idx] == '%') cout << a % b << endl;
	
    return 0;
}

// 123 + 456

