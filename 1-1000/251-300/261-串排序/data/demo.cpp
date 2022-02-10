#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
string str[25];

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> str[i];

	sort(str + 1, str + n + 1);

	for(int i = 1; i <= n; i++) cout << str[i] << endl;
	
	return 0;
}


