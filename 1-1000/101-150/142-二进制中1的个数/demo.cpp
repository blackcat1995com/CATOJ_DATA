#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	
	int n;
	scanf("%d", &n);
	
	while(n--){
	    int x;
	    scanf("%d", &x);
	    
	    int ans = 0;
	    while(x) {
            ans += x & 1;
            x >>= 1;
        }
	    printf("%d ", ans);
	}
	
	return 0;
}

