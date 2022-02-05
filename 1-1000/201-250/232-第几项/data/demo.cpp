#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);

	int m, sum = 0, i = 0;
	cin >> m;

	while(sum <= m)
		sum += ++i;

	cout << i << endl;
	
	return 0;
}


