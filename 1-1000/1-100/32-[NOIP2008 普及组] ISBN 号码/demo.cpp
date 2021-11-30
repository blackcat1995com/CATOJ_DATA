#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#define For(i, a, b) for(register int i=(a); i<=(b); i++)
#define For_(i, a, b) for(register int i=(a); i>=(b); i--)
typedef long long LL;
using namespace std;

string s;
inline int read();
int main() {
	cin >> s;

	int y = s[s.size() - 1] - '0';

	int x = 0;
	int cnt = 0;
	For(i, 0, 11) {
		if (s[i] != '-') {
			++cnt;
			x = x + (s[i] - '0') * cnt;
		}
	}
	x %= 11;


	if (x == y || (x == 10 && y > 9))
		cout << "Right" << endl;
	else {
		if (x == 10) 
			s[s.size() - 1] = 'X';
		
		else 
			s[s.size() - 1] = x % 11 + 48;

		cout << s << endl;
	}
	
	return 0;
}

inline int read() {
	int x = 0;
	int f = 1;
	char ch = getchar();
	while (!isdigit(ch)) {
		if (ch == '-')
			f = -1;
		ch = getchar();
	}

	while (isdigit(ch)) {
		x = x * 10 + ch - '0';
		ch = getchar();
	}

	return x * f;
}

