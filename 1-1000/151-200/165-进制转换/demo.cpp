#include <iostream>
#include <cstdio>
using namespace std;

int n;
char str[50];
int ans = 0;

int main() {

	cin >> n >> str;

	for(int i = 0; str[i]; i++)
		ans = ans * n + str[i] - '0';
	
	cout << ans << endl;
	
	return 0;
}


