#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  
  	string str;
  	getline(cin, str);
  
  	transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;
	
	return 0;
}


