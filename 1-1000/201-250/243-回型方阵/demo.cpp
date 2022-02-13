#include <iostream>
#include <cstdio>
using namespace std;

const int N = 15;

int n;
int a[N][N];

int main() {
  
  	cin >> n;
  	for(int k = 1; k <= (n + 1) / 2; k++)
      	for(int i = k; i <= n + 1 - k; i++)
          	for(int j = k; j <= n + 1 - k; j++)
              	a[i][j] = k;
  
  	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++)
          	cout << a[i][j] << " ";
      	puts("");
    }
     
	return 0;
}
