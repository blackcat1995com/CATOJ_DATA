#include <iostream>
#include <cstdio>
#define ff first
#define ww second
using namespace std;

const int N = 1010;

typedef pair<int, int> PII;

int n;

PII q[N];

int main() {

	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> q[i].ff >> q[i].ww;

	int ans = q[1].ff, minv = q[1].ff + q[1].ww;

	for(int i = 2; i <= n; i++){
		minv = min(minv, q[i].ff);
		ans += minv;
		minv = min(minv + q[i].ww, q[i].ff + q[i].ww);
	}

	cout << ans << endl;
	
	return 0;
}

