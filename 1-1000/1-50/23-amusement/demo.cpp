#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 1100;

int n;
int a[N];

int main() {

	while(scanf("%d", &n) == 1){
		memset(a, 0, sizeof a);
		for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
		if(n <= 2) puts("1");
		else{
			for(int i = 1; i < n; i++){
				int d = a[i + 1] - a[i];
				bool flag = true;
				for(int j = i + 2; j <= n; j++)
					if(a[j] - a[j - 1] != d)
						flag = false;
				if(flag){
					printf("%d\n", i);
					break;
				}
			}
		}	
	}
	
	return 0;
}