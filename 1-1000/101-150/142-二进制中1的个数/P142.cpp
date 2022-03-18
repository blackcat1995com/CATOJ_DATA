#include <iostream>
#include <cstdio>
using namespace std;

int calc(int x){
	int res = 0;
  
  	while(x){
    	res += x & 1;
      	x >>= 1;
    }
      	
  	return res;
}

int main() {
  
  	int n;
  	cin >> n;
  
  	while(n--){
    	int x;
      	cin >> x;
      	cout << calc(x) << " ";
    }
      	
	return 0;
}


