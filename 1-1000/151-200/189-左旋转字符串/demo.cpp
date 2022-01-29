#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
  
  	string str;
  	int k;
  
  	cin >> str >> k;
  	k %= str.size();
  
  	cout << str.substr(k) + str.substr(0, k) << endl;
	
	return 0;
}


