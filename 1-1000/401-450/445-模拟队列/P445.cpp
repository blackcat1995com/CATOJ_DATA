#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

const int N = 1e6 + 10;

int n;
int q[N];
int hh = 0, tt = -1;

int main() {
  
  	cin >> n;
  	while(n--){
    	string op;
      	cin >> op;
      	if(op == "push"){
        	int x;
          	cin >> x;
          	q[++tt] = x;
        }
      	else if(op == "pop") hh++;
        else if(op == "empty"){
        	if(hh <= tt) puts("NO");
          	else puts("YES");
        }
      	else cout << q[hh] << endl;
    }

	return 0;
}

