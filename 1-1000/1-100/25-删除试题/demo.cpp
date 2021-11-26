#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1100;

int n, x;
int a[N];

int main() {
	
  	scanf("%d%d", &n, &x);
  	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
  
  	for(int i = 1; i <= n; i++)
      	if(a[i] != x)
          	printf("%d ", a[i]);
  
	return 0;
}

