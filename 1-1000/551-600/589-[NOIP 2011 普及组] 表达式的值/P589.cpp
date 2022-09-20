#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

const int MOD = 10007;

stack<vector<int>> stk_num;
stack<char> stk_op;

int n;
string s;

unordered_map<char, int> pr{{'+',1}, {'*', 2}};

void calc(){
	auto b = stk_num.top(); stk_num.pop();
	auto a = stk_num.top(); stk_num.pop();
	auto op = stk_op.top(); stk_op.pop();

	if(op == '+')
		stk_num.push({a[0]*b[0]%MOD, (a[0]*b[1]+a[1]*b[0]+a[1]*b[1])%MOD});
	else
		stk_num.push({(a[0]*b[0]+a[1]*b[0]+a[0]*b[1])%MOD, a[1]*b[1]%MOD});
}

int main() {

	cin >> n >> s;
	stk_num.push({1, 1});

	for(auto c : s){
		if(c == '(') stk_op.push(c);
		else if(c == ')'){
			while(stk_op.top() != '(') calc();
			stk_op.pop();
		}
		else{
			while(stk_op.size() && pr[stk_op.top()] >= pr[c]) calc();
			stk_op.push(c);
			stk_num.push({1, 1});
		}
	}

	while(stk_op.size()) calc();

	cout << stk_num.top()[0] << endl;
	
	return 0;
}

