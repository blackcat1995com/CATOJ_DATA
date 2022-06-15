#include <iostream>
#include <cstdio>
using namespace std;

int calc(int m, int n){
	if(m == 0 || n == 1) return 1;
  	if(m < n) return calc(m, m);
  	
  	return calc(m, n - 1) + calc(m - n, n);
}

int main() {
  
  	int T;
  	cin >> T;
  
  	while(T--){
    	int m, n;	
      	cin >> m >> n;
      	cout << calc(m, n) << endl;
    }

	return 0;
}

