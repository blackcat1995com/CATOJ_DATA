#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	int p = 0, res = 0;
	
	for(int i = 1; i <= n; i++){
		p += i;
		res += p;
	}
	
	cout << res << endl;
	
	return 0;
}

