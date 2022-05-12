#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

const int N = 1e4 + 10;
int n;
bool book[N];
int ans = 1e8;

vector<int> get_primes(int n) {
	vector<int> v;

	for (int i = 2; i <= n; i++) {
		if (!book[i]) {
			v.push_back(i);
			for (int j = 2 * i; j <= n; j += i)
				book[j] = true;
		}
	}
	return v;
}

int main() {
 
	cin >> n;
	auto primes = get_primes(n);

	for (int i = 2; i <= n / 2; i++)
		if (!book[i] && !book[n - i])
			ans = min(ans, abs(i * 2 - n));

	cout << ans << endl;

	return 0;
}
