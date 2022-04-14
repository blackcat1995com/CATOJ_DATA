#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

const int N = 1e5 + 10;

int m;
int v[N], l[N], r[N];
int idx = 0;

void init(){
	r[0] = 1, l[1] = 0, idx = 2;
}

void insert(int k, int x){
	v[idx] = x;
  	l[idx] = k;
  	r[idx] = r[k];
  	l[r[k]] = idx;
  	r[k] = idx++;
}

void del(int k){
	r[l[k]] = r[k];
  	l[r[k]] = l[k];
}

void traverse(){
	for(int i = r[0]; i != 1; i = r[i]) cout << v[i] << " ";
  	puts("");
}

int main() {
  
  	cin >> m;
  	
  	init();
  	
  	while(m--){
    	int k, x;
      	string op;
      	cin >> op;
      	if(op == "R"){
        	cin >> x;
          	insert(l[1], x);
        }
      	else if(op == "L"){
        	cin >> x;
          	insert(0, x);
        }
      	else if(op == "D"){
        	cin >> k;
          	del(k + 1);
        }
      	else if(op == "IL"){
        	cin >> k >> x;
          	insert(l[k + 1], x);
        }
      	else{
        	cin >> k >> x;
          	insert(k + 1, x);
        }
    }
  
  	traverse();

	return 0;
}
