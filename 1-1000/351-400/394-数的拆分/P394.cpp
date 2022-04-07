#include <iostream>
#include <cstdio>
using namespace std;

const int N = 25;

int n;
int path[N] = {1};

int total = 0;

void dfs(int u, int rest){
	if(!rest){
    	total++;
      	for(int i = 1; i <= u - 2; i++)
          	cout << path[i] << "+";
      	cout << path[u - 1] << endl;
    }
  
  	for(int i = path[u - 1]; i <= rest; i++){
    	path[u] = i;
      	dfs(u + 1, rest - i);
    }
}

int main() {
  
  	cin >> n;
  	dfs(1, n);
  	printf("total=%d\n", total);
	
	return 0;
}


