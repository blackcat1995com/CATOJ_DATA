#include <iostream>
#include <cstdio>
using namespace std;

const int N = 500;

int n, p;
int a[N];

int main() {

  	cin >> n >> p;
  	a[p] = 2 * p;
  	for(int i = p + 1; i <= n; i++)
      	a[i] = a[i - 1] + i;
  	cout << a[n] << endl;
  
	return 0;
}


