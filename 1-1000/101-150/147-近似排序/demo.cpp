#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

struct Node{
	int a, b;
	bool operator< (const Node& x) const{
		return b < x.b;
	}
}node[110];

int main() {

	int x, y;
	cin >> x >> y;

	int idx = 0;
	for(int i = x; i <= y; i++){
		string s = to_string(i), b = "";
		int k = s.size() - 1;
		while(s[k] == '0') k--;
		while(~k) b += s[k--];
		node[++idx] = {i, stoi(b)};
	}

	sort(node + 1, node + idx + 1);

	for(int i = 1; i <= idx; i++) cout << node[i].a << endl;

	return 0;
}

