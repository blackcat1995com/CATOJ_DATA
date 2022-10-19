#include <iostream>
#include <cstdio>
using namespace std;

int n;
int x[50] = {0, 1, 2};

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	if(i > 2) x[i] = x[i - 1] + x[i - 2];
      	printf("x[%d]=%d\n", i, x[i]);
    }
	
	return 0;
}

