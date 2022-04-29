#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 3e4 + 10;

int w, n;
int a[N];
int ans = 0;

int main() {
  
  	cin >> w >> n;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  
  	sort(a + 1, a + n + 1, greater<int>());
  
  	int L = 1, R = n;
  	while(L <= R){
    	if(a[L] + a[R] <= w) L++, R--;
      	else L++;
      	ans++;
    }
	
  	cout << ans << endl;
  
	return 0;
}


