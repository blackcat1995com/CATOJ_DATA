#include <iostream>
#include <cstdio>
using namespace std;

int n;
int a[1100];

int main() {

	scanf("%d", &n);
	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);

	int ans = 0;

	for(int i = 1; i <= n; i++){
		int sum1 = 0, sum2 = 0;
		for(int j = 1; j <= i - 1; j++)
			if(a[j] > a[i]) sum1++;
		for(int j = i + 1; j <= n; j++)
			if(a[j] > a[i]) sum2++;
		if(sum1 == sum2) ans++;
	}

	printf("%d\n", ans);
	
	return 0;
}

