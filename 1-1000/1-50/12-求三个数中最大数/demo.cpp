#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	int ans = max(a, b);
	ans = max(ans, c);

	cout << ans << endl;
	
	return 0;
}
