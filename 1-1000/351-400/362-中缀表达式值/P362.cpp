#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
#include <unordered_map>
using namespace std;

stack<int> stk_int;
stack<char> stk_op;
unordered_map<char, int> pr{ {'+',1},{'-',1},{'*',2},{'/',2} };
string str;

void calc(){
	auto b = stk_int.top(); stk_int.pop();
	auto a = stk_int.top(); stk_int.pop();
	auto op = stk_op.top(); stk_op.pop();

	int x;
	if(op == '+') x = a + b;
	else if(op == '-') x = a - b;
	else if(op == '*') x = a * b;
	else x = a / b;

	stk_int.push(x);
}

bool is_op(char op){
	if(op == '+' || op == '-' || op == '*' || op == '/')
		return true;
	return false;
}

int main() {

	cin >> str;

	bool legal = true;
	int sum = 0;
	for(int i = 0; i < str.size() - 1; i++){
		if(str[i] == '(') sum++;
		if(str[i] == ')') sum--;
	}

	for(int i = 1; i < str.size() - 1; i++){
		if(
			(is_op(str[i]) && is_op(str[i - 1])) ||  // +-
			(is_op(str[i]) && str[i - 1] == '(')	||  // (*
			(str[i] == ')' && is_op(str[i - 1])) ||  // +)  
			(str[i] == '(' && isdigit(str[i - 1])) ||
			(isdigit(str[i]) && str[i - 1] == ')')) {
				legal = false;
				break;
			}
	}

	if(sum || !legal || (str.size() == 2 && is_op(str[0]))){
		puts("NO");
		return 0;
	}

	for(int i = 0; i < str.size() - 1; i++){
		if(isdigit(str[i])){
			int x = 0;
			while(i < str.size() - 1 && isdigit(str[i]))
				x = x * 10 + str[i++] - '0';
			i--;
			stk_int.push(x);
		}
		else if(str[i] == '(') stk_op.push(str[i]);
		else if(str[i] == ')'){
			// 2 + 4 - (2+5*3-6
			while(stk_op.top() != '(') calc();
			stk_op.pop();
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
