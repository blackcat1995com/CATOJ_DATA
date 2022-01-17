#include <iostream>
#include <cstdio>
using namespace std;

const int N = 20;
int n;
bool book[N];

void dfs(int u){
	if(u > n){
    	for(int i = 1; i <= n; i++)
          	if(book[i])
              	cout << i << " ";
      	cout << endl;
      	return;
    }
  
  	book[u] = true;
  	dfs(u + 1);
  
  	book[u] = false;
  	dfs(u + 1);
}

int main() {
  
  	cin >> n;
  
  	dfs(1);
	
	return 0;
}


