#include <iostream>
#include <cstdio>
using namespace std;

const int N = 30;

int n, m;
int path[N];

void dfs(int u, int st){
	if(u > m){
    	for(int i = 1; i <= m; i++)
          	cout << path[i] << " ";
      	cout << endl;
      	return;
    }
  
  	for(int i = st; i <= n; i++){
    	path[u] = i;
      	dfs(u + 1, i + 1);
    }
}

int main() {
  
  	cin >> n >> m;
  	dfs(1, 1);
	
	return 0;
}


