#include <iostream>
#include <cstdio>
using namespace std;

int n;
int a[25];

int main() {
  
  	cin >> n;
  	a[n] = 1;
  
  	for(int i = n; i >= 0; i--)
      	a[i - 1] = 2 * a[i] + 1;
  
  	cout << a[0] << endl;
	
	return 0;
}

