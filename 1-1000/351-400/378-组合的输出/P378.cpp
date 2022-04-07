#include <iostream>
#include <cstdio>
using namespace std;

const int N = 30;

int n, r;
int path[N];

void dfs(int u){
	if(u > r){
		for(int i = 1; i <= r; i++)
			printf("%3d", path[i]);
		puts("");
      	return;
	}

	for(int i = path[u - 1] + 1; i <= n; i++){
		path[u] = i;
		dfs(u + 1);
	}
}

int main() {

	cin >> n >> r;
	dfs(1);
	
	return 0;
}


