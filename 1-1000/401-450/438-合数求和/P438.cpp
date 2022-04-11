#include <iostream>
#include <cstdio>
using namespace std;

bool is_heshu(int x){
	for(int i = 2; i <= x / i; i++)
		if(x % i == 0)
			return true;
	return false;
}

int main() {

	int n, ans = 0;
	cin >> n;
	for(int i = 4; i <= n; i++)
		if(is_heshu(i))
			ans += i;

	cout << ans << endl;
	
	return 0;
}

