#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 + 10;

int n, x;
int a[N];

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  
  	cin >> x;
  
  	int L = 1, R = n;
  	while(L < R){
    	int mid = L + R >> 1;
      	if(x <= a[mid])  R = mid;
      	else L = mid + 1;
    }
  
  	if(a[L] == x) cout << L << endl;
  	else puts("-1");
	
	return 0;
}


