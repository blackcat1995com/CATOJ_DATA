#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

const int N = 10;

int n;
int q[N];
int hh = 0, tt = 0;

int main() {
  
  	cin >> n;
  	while(n--){
    	   string op;
      	   cin >> op;
      	   if(op == "push"){
        	int x;
          	cin >> x;
          	q[tt++] = x;
                if(tt == N) tt = 0;
           }
      	   else if(op == "pop") {
                hh++;
                if(hh == N) hh = 0;
           }
           else if(op == "empty"){
        	if(hh != tt) puts("NO");
          	else puts("YES");
           }
      	   else cout << q[hh] << endl;
    }

    for(int i = 0; i < N; i++) cout << q[i] << " ";

    return 0;
}

/*
16
push 1
push 2
push 3
push 4
push 5
push 6
pop
pop
pop
pop
push 21
push 22
push 23
push 24
push 25
push 26

25 26 3 4 5 6 21 22 23 24
*/