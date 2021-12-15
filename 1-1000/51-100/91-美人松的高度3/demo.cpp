#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 + 10;

int n, x;
int a[N];
int ans = 0;

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  	cin >> x;
  
  	for(int i = 1; i <= n; i++)
      	if(a[i] != x) cout << a[i] << " ";
  
	return 0;
}
