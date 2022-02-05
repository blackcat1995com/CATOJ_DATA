#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);

	int m, i = 0;
	double sum = 0.0;
	cin >> m;

	while(sum < m)
		sum += 1.0/(++i);

	cout << i << endl;
	
	return 0;
}


