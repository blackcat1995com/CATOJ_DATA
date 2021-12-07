#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 + 10;

int n, m;
int b[N];

void insert(int L, int R, int c){
	b[L] += c;
  	b[R + 1] -= c;
}

int main() {
  
  	scanf("%d%d", &n, &m);
  
  	for(int i = 1; i <= n; i++){
    	int x;
      	scanf("%d", &x);
      	insert(i, i, x);
    }
  
  	
  	while(m--){
    	int L, R, c;
      	scanf("%d%d%d", &L, &R, &c);
      	insert(L, R, c);
    }
  	
  	int sum = 0;
  	for(int i = 1; i <= n; i++){
    	sum += b[i];
      	printf("%d ", sum);
    }
	
	return 0;
}

