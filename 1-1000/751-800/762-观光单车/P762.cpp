#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 1e5 + 10;

int w, n;
int a[N];
int ans = 0;

int main() {

  	cin >> n >> w;
  	for(int i = 1; i <= n; i++) cin >> a[i];

  	sort(a + 1, a + n + 1);

  	int L = 1, R = n;
  	while(L < R){
    	if(a[L] + a[R] <= w) L++, R--;
      	else R--;
      	ans++;
    }

  	if(L == R) ans++;

  	cout << ans << endl;

	return 0;
}