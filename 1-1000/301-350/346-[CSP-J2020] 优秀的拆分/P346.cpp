#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int n;
  	cin >> n;
  	
  	if(n & 1){
    	puts("-1");
      	return 0;
    }
  
  	for(int i = 30; ~i; i--)
      	if(n >> i & 1)
          	cout << (1 << i) << " ";

	return 0;
}

