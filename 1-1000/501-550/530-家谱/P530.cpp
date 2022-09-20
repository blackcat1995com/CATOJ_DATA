#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <string>
using namespace std;

unordered_map<string, string> p;

string find(string x){
	if(p[x] != x) p[x] = find(p[x]);
  	return p[x];
}

int main() {
  
  	string name, str;
  	char ch;
  
  	while(cin >> ch, ch != '$'){
    	cin >> name;
      	if(ch == '#'){
        	str = name;
          	if(p[name]=="") p[name] = name;
        }
      	if(ch == '+') p[name] = str;
        if(ch == '?') cout << name << " " << find(name) << endl;   	
    }
	
	return 0;
}

