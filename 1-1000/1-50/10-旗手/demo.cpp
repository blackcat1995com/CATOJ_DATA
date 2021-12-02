#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 10100;

int n;
int a[N];

int main() {
	
	scanf("%d", &n);

	int maxh = -1, idx = -1;
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		if(a[i] > maxh){
			maxh = a[i];
			idx = i;
		}
	}

	swap(a[1], a[idx]);

	for(int i = 1; i <= n; i++) printf("%d ", a[i]);

	return 0;
}
