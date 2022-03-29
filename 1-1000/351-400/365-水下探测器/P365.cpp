#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int h, s;
string str;

int main() {
  
  	cin >> h >> s;
  	cin >> str;
  
  	for(int i = 0; i < str.size(); i++){
    	if (str[i] == 'u' && s > 0) s--;
      	else if(str[i] == 'd' && s < h) s++;
    }
  
  	cout << s << endl;
	
	return 0;
}


