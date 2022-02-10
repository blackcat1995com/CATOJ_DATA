#include <iostream>
#include <cstdio>
using namespace std;

int n;
int book[20];

void dfs(int u){
	if(u > n){
    	for(int i = 1; i <= n; i++)
          	if(book[i]) cout << i << " ";
      	puts("");
      	return;
    }
  
  	// 选择第u个数
  	book[u] = true;
  	dfs(u + 1);
  
  	// 不选第u个数
  	book[u] = false;
  	dfs(u + 1);
}

int main() {

  	cin >> n;
  
  	dfs(1);
	
	return 0;
}
