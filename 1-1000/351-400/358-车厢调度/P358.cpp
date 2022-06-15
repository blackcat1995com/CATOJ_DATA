#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

const int N = 1010;

stack<int> stk;
int n, a[N], cur = 1;

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  
  	for(int i = 1; i <= n; i++){
    	while(cur <= a[i]) stk.push(cur++);
      	if(stk.top() == a[i]) stk.pop();
      	else{
        	puts("NO");
          	return 0;
        }
    }
  
  	puts("YES");

	return 0;
}

