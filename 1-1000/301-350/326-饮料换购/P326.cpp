#include <iostream>
#include <cstdio>
using namespace std;

int main() {
 
	int n;
	cin >> n;
	int ans = n;

	while(n >= 3){
		ans += n / 3;
		n = n / 3 + n % 3;
	}

	cout << ans << endl;
	
	return 0;
}


