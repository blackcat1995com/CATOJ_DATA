#include <iostream>
#include <cstdio>
using namespace std;

const int N = 25, M = 1010;
int n;
int path[N];
bool h[M];
int ans = 0;

void dfs(int u, int s){
	if(u > n){
    	h[s] = true;
      	return;
    }
  
  	dfs(u + 1, s);
  	dfs(u + 1, s + path[u]);
}

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> path[i];
  
  	dfs(1, 0);
  
  	for(int i = 1; i < M; i++)
      	if(h[i]) ans++;
  
  	cout << ans << endl;
	
	return 0;
}


