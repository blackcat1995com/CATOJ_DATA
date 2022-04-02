#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	double s = 0.0;
	int n = 0, k;
	cin >> k;

	while(s <= k){
		s += 1.0/(++n);
	}

	cout << n << endl;
	
	return 0;
}


