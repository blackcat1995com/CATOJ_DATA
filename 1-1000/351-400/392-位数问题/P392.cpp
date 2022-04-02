#include <iostream>
#include <cstdio>
using namespace std;

int f[1010][2], n;

int main() {
  
  	cin >> n;
  	f[1][0] = 9;
  	f[1][1] = 1;
  
  	for(int i = 2; i <= n; i++){
    	int k = 9;
      	if(n == i)
         	k = 8;
      	f[i][0] = (f[i - 1][0] * k + f[i - 1][1]) % 12345;
      	f[i][1] = (f[i - 1][0] + f[i - 1][1] * k) % 12345;
    }
  
  	cout << f[n][0] << endl;
	
	return 0;
}


