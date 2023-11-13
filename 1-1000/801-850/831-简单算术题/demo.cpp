#include <bits/stdc++.h>
using namespace std;

stack<int> stk;
stack<char> op;

unordered_map<char, int> g{{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}};

void eval() {
    int a = stk.top();
    stk.pop();

    int b = stk.top();
    stk.pop();

    char p = op.top();
    op.pop();

    int r;

    if (p == '+') r = b + a;
    if (p == '-') r = b - a;
    if (p == '*') r = b * a;
    if (p == '/') r = b / a;

    stk.push(r);
}

int main() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') continue; // ¹ýÂËµô¿Õ¸ñ
        if (isdigit(s[i])) {
            int x = 0;
            while (i < s.size() && s[i] >= '0' && s[i] <= '9' || s[i] == ' ') {
            	if(s[i] != ' '){
            		x = x * 10 + s[i] - '0'; 
				}
                
                i++;
            }
            i--;

            stk.push(x);
        }

        else if (s[i] == '(')
            op.push(s[i]);
        else if (s[i] == ')') {
            while (op.top() != '(') eval();
            op.pop();
        } else {
            while (op.size() && g[op.top()] >= g[s[i]]) eval();
            op.push(s[i]);
        }
    }
    while (op.size()) eval();

    printf("%d\n", stk.top());
    return 0;
}
