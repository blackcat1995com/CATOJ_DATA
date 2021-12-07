#include <iostream>
#include <cstdio>
using namespace std;

const int N = 2010;

int n, m;
int a[N];

int main() {

	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);

	while(m--){
		int x;
		scanf("%d", &x);
		if(x >= a[n]) a[++n] = x;
		else{
			int idx = -1;
			for(int i = 1; i <= n; i++){
				if(x <= a[i]){
					idx = i;
					break;
				}
			}
			for(int i = ++n; i >= idx + 1; i--)
				a[i] = a[i - 1];
			a[idx] = x;

		}
		
	}

	for(int i = 1; i <= n; i++)
		printf("%d ", a[i]);
	
	return 0;
}

