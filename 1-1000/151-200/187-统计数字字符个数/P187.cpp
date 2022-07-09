#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
  
  	string str;
 	getline(cin, str);
  
  	int ans = 0;
  	for(auto x : str)
      	if(x >= '0' && x <= '9')
          	ans++;
  
  	cout << ans << endl;

	return 0;
}

