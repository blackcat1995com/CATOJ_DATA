#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 1e5 + 3;

int h[N], to[N], ne[N], idx = 0;

void insert(int x){
	int k = (x % N + N) % N;
  	to[idx] = x, ne[idx] = h[k], h[k] = idx++;
}

bool find(int x){
	int k = (x % N + N) % N;
  	for(int i = h[k]; ~i; i = ne[i])
      	if(to[i] == x)
          	return true;
  	return false;
}

int main() {
  
  	int n;
  	cin >> n;
  	
  	memset(h, -1, sizeof h);
  
  	while(n--){
    	char op[2];
      	int x;
      	cin >> op >> x;
      	if(*op == 'I') insert(x);
      	else{
        	if(find(x)) puts("Yes");
          	else puts("No");
        }
    }
	
	return 0;
}
