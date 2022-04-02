#include <iostream>
#include <cstdio>
using namespace std;

const int N = 55;

int n;
int a[N] = {0, 1, 2, 4};

int main() {
  
  	cin >> n;
  	for(int i = 4; i <= n; i++)
      	a[i] = a[i - 1] + a[i - 2] + a[i - 3];
  
  	cout << a[n] << endl;
	
	return 0;
}


