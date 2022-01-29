#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
  
  	string A, B;
  	cin >> A >> B;
  
  	int ans = 0;
  
  	for(auto a : A)
      	for(auto b : B)
          	ans += (a - '0') * (b - '0');
  
  	cout << ans << endl;
	
	return 0;
}


