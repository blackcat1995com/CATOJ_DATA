#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e5 +10;
int n, m;
int a[N] = {-1};

int main() {
  
  	cin >> n >> m;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  	while(m--){
    	int x;
      	cin >> x;
      	int L = 1, R = n;
      	while(L <= R){
        	int mid = L + R >> 1;
          	if(x < a[mid]) R = mid - 1;
          	else L = mid + 1;
        }
      	cout << a[R] << endl;
    }
	
	return 0;
}


