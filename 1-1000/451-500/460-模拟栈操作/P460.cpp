#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e4 + 10;

int n;

int main() {
  
  	while(cin >> n, n){
    	int stk[N] = {}, top = 0;
      	char op[2];
      	int x;
      
      	while(n--){
        	cin >> op;
          	if(*op == 'P'){
            	cin >> x;
              	stk[++top] = x;
            }
          	else if(*op == 'O'){
            	if(top > 0) top--;
            }
          	else{
            	if(top > 0) cout << stk[top] << endl;
              	else puts("E");
            }
        }
      	puts("");
    }

	return 0;
}

