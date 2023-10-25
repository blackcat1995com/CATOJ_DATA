#include <iostream>
#include <cstdio>
using namespace std;

int x, y, z, q;

int main() {

	cin >> x >> y >> z >> q;
	
	int t = 2 * x + 5 * y + 3 * z;
	
	if(q >= t)
		cout << "Yes" << endl << q - t << endl;
	else
		cout << "No" << endl << t - q << endl;

	return 0;
}

