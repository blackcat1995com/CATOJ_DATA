#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

char str[N];
int f[N];
int ans = 0;

int main() {
 
	cin >> str + 1;
	for (int i = 1; str[i]; i++) {
		if (str[i] >= '0' && str[i] <= '9') 
			f[i] = f[i - 1] + 1;
		ans = max(ans, f[i]);
	}

	cout << ans << endl;

	return 0;
}
