#include <iostream>
#include <cstdio>
using namespace std;

const int N = 20;

int n;
int path[N];
int book[N];

void dfs(int u){
	if(u > n){
    	for(int i = 1; i <= n; i++)
          	cout << path[i] << " ";
      	cout << endl;
      	return;
    }
  
  	for(int i = 1; i <= n; i++){
    	if(!book[i]){
        	path[u] = i;
          	book[i] = true;
          	dfs(u + 1);
          	book[i] = false;
        }
    }
}

int main() {
  
  	cin >> n;
  	dfs(1);
	
	return 0;
}


