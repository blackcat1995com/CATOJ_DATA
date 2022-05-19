#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

typedef unsigned long long ULL;

const int N = 1e6 + 10, P = 131;

ULL hsub[N], hs[N], p[N] = {1};

ULL calc(int L, int R, ULL h[]){
	return h[R] - h[L - 1] * p[R - L + 1];
}

int main() {
  
  	int T;
  	cin >> T;
  
  	while(T--){
      
      	char sub[N], s[N];
    	cin >> sub + 1 >> s + 1;
      
      	int sublen = strlen(sub + 1), slen = strlen(s + 1);
      
      	for(int i = 1; i <= max(sublen, slen); i++){
        	p[i] = p[i - 1] * P;
          	hs[i] = hs[i - 1] * P + s[i];
          	hsub[i] = hsub[i - 1] * P + sub[i];
        }
      
      	int ans = 0;
      	ULL x = hsub[sublen];
      	for(int L = 1; L <= slen - sublen + 1; L++){
        	int R = L + sublen - 1;
          	if(x == calc(L, R, hs)) ans++;
        }
      
      	cout << ans << endl;
    }
	
	return 0;
}


