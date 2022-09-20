#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
#include <unordered_map>
using namespace std;

const int MOD = 10000;

string str;
stack<int> stk_int;
stack<char> stk_op;

unordered_map<char, int> pr{{'+', 1}, {'*', 2}};

void calc(){
	int b = stk_int.top(); stk_int.pop();
  	int a = stk_int.top(); stk_int.pop();
  	char op = stk_op.top(); stk_op.pop();
  
  	int x;
  	if(op == '+') x = (a + b) % MOD;
  	else x = a * b % MOD;
  
  	stk_int.push(x);
}

int main() {
  
  	cin >> str;
  	for(int i = 0; i < str.size(); i++){
    	if(isdigit(str[i])){
        	int x = 0;
          	while(i < str.size() && isdigit(str[i]))
              	x = x * 10 + str[i++] - '0';
          	i--;
          	x %= MOD;
          	stk_int.push(x);
        }
      	else{
        	while(stk_op.size() && pr[stk_op.top()] >= pr[str[i]]) calc();
          	stk_op.push(str[i]);
        }
    }
  
  	while(stk_op.size()) calc();
  	
  	cout << stk_int.top() << endl;
	
	return 0;
}

