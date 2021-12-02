#include <iostream>
#include <cstdio>
using namespace std;

const int N = 10010;

int n;
double sum = 0, ave;
int a[N];

int ans = 0;

int main() {

	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		sum += a[i];
	}

	ave = (double)sum / n;

	for(int i = 1; i <= n; i++)
		if(a[i] > ave)
			ans++;

	printf("%d\n", ans);
	
	return 0;
	
}

