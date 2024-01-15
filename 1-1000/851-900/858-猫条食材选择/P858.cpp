#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

const int N = 15;

int n;
int S[N], B[N];

bool book[N];
int res = 1e9;

void dfs(int u, int s, int b){

	if(u > n){
		bool flag = false;
		for(int i = 1; i <= n; i++)
			if(book[i])
				flag = true;
		if(flag)
			res = min(res, abs(s - b));
//		cout << s << " " << b << endl;
		return;
	}
		
	book[u] = true;
	dfs(u + 1, s * S[u], b + B[u]);
	book[u] = false;
	
	dfs(u + 1, s, b);
}


int main() {
	
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> S[i] >> B[i];

	dfs(1, 1, 0);
	
	cout << res << endl;

	return 0;
}

