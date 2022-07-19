#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int  N = 2e5 + 10;

bool cmp(int a, int b){
	return a > b;
}

int n, b;
int a[N];
int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);

	scanf("%d%d", &n, &b);

	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);

	sort(a + 1, a + n + 1, cmp);

	int ans = 0;

	for(int i = 1; i <= n; i++){
		ans++;
		if(b >= a[i]) b -= a[i];
		else break;
	}
	
	printf("%d\n", ans);

	return 0;
}
