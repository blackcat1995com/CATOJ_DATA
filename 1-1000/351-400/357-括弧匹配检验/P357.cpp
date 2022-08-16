#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
using namespace std;

stack<char> stk;
string s;

int main() {
  
  	cin >> s;
  	for(int i = 0; i < s.size(); i++){
    	if(s[i] == '(' || s[i] == '[') stk.push(s[i]);
      	else if(stk.size()){
        	if(s[i] == ')' && stk.top() == '(') stk.pop();
          	else if(s[i] == ']' && stk.top() == '[') stk.pop();
        }
      	else{
        	puts("Wrong");
          	return 0;
        }
    }
  
  	if(stk.size()) puts("Wrong");
  	else puts("OK");
	
	return 0;
}

