#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 1e4 + 10;

int n;
int a[N];

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  
  	sort(a + 1, a + n + 1);
  
  	cout << a[n + 1 >> 1] << endl;
	
	return 0;
}

