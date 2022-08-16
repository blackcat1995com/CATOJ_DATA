#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
using namespace std;

stack<char> stk;
string s;

int main() {
  
  	cin >> s;
  	for(int i = 0; i < s.size() - 1; i++){
    	if(s[i] == '(') stk.push(s[i]);
      	else if(s[i] == ')'){
          	if(stk.empty()){
            	puts("NO");
              	return 0;
            }
        	else if(stk.top() == '(') stk.pop();
        }
    }
  
  	if(!stk.empty()) puts("NO");
  	else puts("YES");
	
	return 0;
}
