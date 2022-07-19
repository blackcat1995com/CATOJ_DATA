#include <iostream>
#include <cstdio>
#define For(i, a, b) for(register int i=(a); i<=(b); i++)
#define For_(i, a, b) for(register int i=(a); i>=(b); i--)
typedef long long LL;
using namespace std;

inline int read();
int main() {
	
	freopen("5.in", "r", stdin);
	freopen("5.out", "w", stdout);
	int n = read(), ans = 0;
	For(i, 1, n)
		ans += n / i;
	printf("%d\n", ans);

	return 0;
}

inline int read() {
	int x = 0;
	int f = 1;
	char ch = getchar();
	while (!isdigit(ch)) {
		if (ch == '-')
			f = -1;
		ch = getchar();
	}

	while (isdigit(ch)) {
		x = x * 10 + ch - '0';
		ch = getchar();
	}

	return x * f;
}
