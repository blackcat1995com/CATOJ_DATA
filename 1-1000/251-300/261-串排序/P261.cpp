#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int n;
string s[25];

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> s[i];
  
  	sort(s + 1, s + n + 1);
  
  	for(int i = 1; i <= n; i++) cout << s[i] << endl;

	return 0;
}

