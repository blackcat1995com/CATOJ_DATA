#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char s1[101];
char s2[101];
int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	cin.getline(s1, 101);
	int lenstr = strlen(s1);
	for (int i = 0; i < lenstr-1; i++) {
		s2[i] = s1[i] + s1[i + 1];
	}
	s2[lenstr - 1] = s1[lenstr - 1] + s1[0];
	cout << s2 << endl;
	return 0;
}
