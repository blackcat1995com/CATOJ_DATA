#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

const int N = 110;

struct Node{
	int a, b;	// a是原始值，b是真正作为比较的值
	bool operator< (const Node& x) const{
		return b < x.b;
	}
}node[N];

int main() {

	int x, y;
	cin >> x >> y;

	int len = 0;

	for(int i = x; i <= y; i++){
		string s = to_string(i), b = "";
		int k = s.size() - 1;
		while(s[k] == '0') k--;
		while(~k){
			b += s[k];
			k--;
		}
		node[++len] = {i, stoi(b)};
	}

	sort(node + 1, node + len + 1);

	for(int i = 1; i <= len; i++)
		cout << node[i].a << endl;
	
	return 0;
}


