#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 + 10;

int a[N];
int n;

int main() {
  
  	while(cin >> n, n){
      	int ans = 0;
    	for(int i = 1; i <= n; i++){
        	int t;
          	cin >> t;
          	ans ^= t;
        }
      	cout << ans << endl;
    }	
	
	return 0;
}


