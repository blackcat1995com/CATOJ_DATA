#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int n, s = 0;
  	cin >> n;
  	while(n){
    	s = s * 10 + n % 10;
      	n /= 10;
    }
  
  	cout << s << endl;
	
	return 0;
}

