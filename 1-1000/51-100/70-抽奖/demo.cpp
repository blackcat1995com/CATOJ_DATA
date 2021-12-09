#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e4 + 10;

int n, ans = 0;
int a[N];

int main() {

	scanf("%d", &n);

	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);

	int num;
	scanf("%d", &num);

	for(int i = 1; i <= n; i++)
		if(num == a[i]){
			ans = i; 
			break;
		}

	printf("%d\n", ans);

	
	return 0;
}

