#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e5 + 10;

int n;
int stk[N], top = 0;

int main() {
  
  	cin >> n;
  
  	for(int i = 1; i <= n; i++){
    	int x;
      	cin >> x;
      	while(top && stk[top] >= x) top--;
      	if(top) cout << stk[top] << " ";
      	else cout << -1 << " ";
      	stk[++top] = x;
    }
	
	return 0;
}


