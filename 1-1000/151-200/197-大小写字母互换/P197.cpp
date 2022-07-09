#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
  
  	string str;
  	getline(cin, str);
  
  	for(auto&x : str)
      	if(x >= 'a' && x <= 'z') x -= 32;
  		else if(x >= 'A' && x <= 'Z') x += 32;
  
  	cout << str << endl;

	return 0;
}

