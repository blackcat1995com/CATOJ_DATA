#include <iostream>
#include <cstdio>
using namespace std;

int n;
int a[10100];

int main() {

	scanf("%d", &n);
	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);

	int x;
	scanf("%d", &x);

	int L = 1, R = n, ans = 0;
	while(L <= R){
		int mid = L + R >> 1;
		if(x == a[mid]){
			ans = mid;
			break;
		}

		if(x < a[mid]) R = mid - 1;
		else L = mid + 1; 
	}

	printf("%d\n", ans);
	
	return 0;
}

