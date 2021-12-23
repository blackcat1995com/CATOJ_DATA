#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

struct Node{
	int s, g;
	bool operator> (const Node& x) const{
		if(s == x.s) return g < x.g;
		return s > x.s;
	}
}node[210];


int main() {

	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> node[i].s >> node[i].g;

	sort(node + 1, node + n + 1, greater<Node>());

	for(int i = 1; i <= n; i++){
		int ans = 0;
		for(int j = 1; j < i; j++){
			if(node[j].g < node[i].g) ans++;
		}
		cout << ans << endl;
	}
	
	return 0;
}

