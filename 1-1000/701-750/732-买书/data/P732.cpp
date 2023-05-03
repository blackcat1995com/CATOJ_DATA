#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010;

int n;
int a[5] = { 0, 10, 20, 50, 100 };
int f[N] = { 1 };

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	
	scanf("%d", &n);
	
	for(int i = 1; i <= 4; i++)
	    for(int j = a[i]; j <= n; j++)
	        f[j] += f[j-a[i]];
	        
	printf("%d\n", f[n]);
	
	return 0;
}
