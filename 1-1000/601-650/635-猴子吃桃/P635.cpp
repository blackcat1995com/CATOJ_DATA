#include <iostream>
#include <cstdio>
using namespace std;

int n;
int a[25];

int main() {
  
  	cin >> n;
  	a[n] = 1;
  
  	for(int i = n; i >= 1; i--)
      	a[i - 1] = 2 * (a[i] + 1);
  
  	cout << a[1] << endl;
	
	return 0;
}

// a1/2-1=a2
// a1=(a2+1)*2

