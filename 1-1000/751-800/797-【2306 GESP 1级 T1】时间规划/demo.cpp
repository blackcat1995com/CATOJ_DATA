#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	int h1, m1, h2, m2;
	cin >> h1 >> m1 >> h2 >> m2;
	
	int t1 = h1 * 60 + m1;
	int t2 = h2 * 60 + m2;
	
	cout << t2 - t1 << endl;
		
	return 0;
}

