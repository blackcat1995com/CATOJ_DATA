#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

string line1, line2, str1, str2;

void work(string& line, string& str){
	stringstream ssin(line);
  	string tmps;
  	while(ssin >> tmps) str += tmps;
  	transform(str.begin(), str.end(), str.begin(), ::toupper);
}

int main() {
  
  	getline(cin, line1);
  	getline(cin, line2);
  
  	work(line1, str1);
  	work(line2, str2);
  
  	if(str1 == str2) puts("YES");
  	else puts("NO");
	
	return 0;
}


