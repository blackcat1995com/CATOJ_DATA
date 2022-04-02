#include <iostream>
#include <cstdio>
using namespace std;

const int N = 50;

int a[N] = {0, 1, 1};

int main() {
	
  	int n;
  	scanf("%d", &n);
  
  	for(int i = 3; i <= n; i++)
      	a[i] = a[i - 1] + a[i - 2];
  
  	printf("%d\n", a[n]);
  
	return 0;
}

