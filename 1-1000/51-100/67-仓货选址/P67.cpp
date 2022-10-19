#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long LL;
const int N = 1e5 + 10;

int n;
int a[N];

LL ans = 0;

int main() {
	
  	scanf("%d", &n);
	
  	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
	
  	sort(a + 1, a + n + 1);
  
  	for(int i = 1; i <= n; i++)
      	ans += abs(a[i] - a[n + 1 >> 1]);
  
  	printf("%lld\n", ans);
  	return 0;
}
