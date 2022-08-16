#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
using namespace std;

typedef long long LL;

string str;
stack<LL> stk;

int main() {

	getline(cin, str);

	for(int i = 0; i < str.size() - 1; i++){
		if(str[i] == '+'){
			LL t = stk.top();
			stk.pop();
			stk.top() += t;
		}
		else if(str[i] == '-'){
			LL t = stk.top();
			stk.pop();
			stk.top() -= t;
		}
		else if(str[i] == '*'){
			LL t = stk.top();
			stk.pop();
			stk.top() *= t;
		}
		else if(str[i] == '/'){
			LL t = stk.top();
			stk.pop();
			stk.top() /= t;
		}

		// 16 9 4 3 +*-@
		else if(isdigit(str[i])){
			LL x = 0;
			while(str[i] != ' ')
				x = x * 10 + str[i++] - '0';
			stk.push(x);
		}

	}

	cout << stk.top() << endl;
	
	return 0;
}

