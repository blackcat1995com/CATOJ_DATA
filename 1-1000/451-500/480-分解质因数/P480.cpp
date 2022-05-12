#include <iostream>
#include <cstdio>
using namespace std;

int n, ans = 0;

void work(int n, int k) {
	if (n < k) return;

	while (n % k) k++;

	ans++;

	work(n / k, k);
}

int main() {
 
	int n;
	cin >> n;

	work(n, 2);

	cout << ans << endl;

	return 0;
}
