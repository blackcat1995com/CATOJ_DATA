#include <iostream>
using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);

	long long n;
	cin >> n;
	while (n != 1){
		if (n%2 == 0){
			printf("%lld/2=%lld\n", n, n/2);
			n /= 2;
		}
		else{
			printf("%lld*3+1=%lld\n", n, n*3+1);
			n = n*3 + 1;
		}
	}

	return 0;
}
