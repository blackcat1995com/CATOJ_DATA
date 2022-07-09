#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
  
  	string str;
  	char ch1, ch2;
  
  	getline(cin, str);
  	cin >> ch1 >> ch2;
  
  	for(auto& x : str)
      	if(x == ch1)
          	x = ch2;
  
  	cout << str << endl;

	return 0;
}

