#include <iostream>
#include <cmath>
using namespace std;

int n;
int a[110];
int res = 0;

int main() {
	
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		if(i >= 2)
			res = max(res, abs(a[i] - a[i - 1]));
	}	

	cout << res << endl;

	return 0;
}



