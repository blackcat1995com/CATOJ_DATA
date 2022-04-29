#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 1e6 + 10;
int n, m, x;
int a[N];

bool is_find(int x){
	int L = 1, R = n;
  	while(L <= R){
    	int mid = L + R >> 1;
      	if(x == a[mid]) return true;
      	
      	if(x < a[mid]) R = mid - 1;
      	else L = mid + 1;
    }
  	return false;
}

int main() {
  
    while(scanf("%d%d", &n, &m) == 2){
    	memset(a, 0, sizeof a);
      	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
      	sort(a + 1, a + n + 1);
      	while(m--){
        	scanf("%d", &x);
          	if(is_find(x)) puts("Yes");
          	else puts("No");
        }
    }
	
	return 0;
}


