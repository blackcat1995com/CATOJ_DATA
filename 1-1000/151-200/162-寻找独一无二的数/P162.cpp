#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int n;
  	while(cin >> n, n){
    	int ans = 0;
      	for(int i = 1; i <= n; i++){
        	int x;
          	cin >> x;
          	ans ^= x;
        }
      	cout << ans << endl;
    }
  
	return 0;
}


