#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 + 10;

int n, x, ans;
int h[N];

int main() {
  
  	scanf("%d", &n);
  	for(int i = 1; i <= n; i++){
    	int t;
      	scanf("%d", &t);
      	h[t] = 1;
    }
  
  	scanf("%d", &x);
  
  	for(int i = 1; i <= x / 2; i++)
      	if(h[i] == 1 && h[x - i] == 1 && i != x - i)
          	ans++;
  
  	printf("%d\n", ans);
	
	return 0;
}

