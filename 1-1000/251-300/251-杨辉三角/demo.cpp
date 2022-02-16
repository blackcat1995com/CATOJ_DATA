#include <iostream>
#include <cstdio>
using namespace std;

const int N = 40;

int n;
int a[N][N];

int main() {
  
  	cin >> n;
  	
  	for(int i = 1; i <= n; i++){
    	a[i][1] = 1;
      	a[i][i] = 1;
      	for(int j = 2; j < i; j++)
          	a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
  
  
  	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= i; j++)
          	printf("%d ", a[i][j]);
      	puts("");
    }
     
	return 0;
}
