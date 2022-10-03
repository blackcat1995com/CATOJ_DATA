#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 + 10;

typedef unsigned long long ULL;

int n, m, c, k;
bool book[N];
ULL sum = 0;

int main() {
  
  	cin >> n >> m >> c >> k;
  
  	for(int i = 1; i <= n; i++){
    	ULL x;
      	scanf("%llu", &x);
      	sum |= x;
    }
  
  	for(int i = 1; i <= m; i++){
    	int p, q;
      	scanf("%d%d", &p, &q);
      	if(!(sum >> p & 1) && !book[p]){
        	book[p] = true;
          	k--;
        }
    }
  
  	if(k == 64){
    	if(!n) puts("18446744073709551616");
      	else printf("%llu\n", (~0ull) - n);
    }
  	else printf("%llu\n", (1ull << k) - n);
	
	return 0;
}

