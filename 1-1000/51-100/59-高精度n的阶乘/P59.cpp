#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

typedef vector<int> VI;

VI mul(VI& A, int b){
	VI C;
  
  	int t = 0;
  
  	for(int i = 0; i < A.size() || t; i++){
    	if(i < A.size()) t += A[i] * b;
      	C.push_back(t % 10);
      	t /= 10;
    }
  
  	while(C.size() > 1 && C.back() == 0) C.pop_back();
  
  	return C;
}

int main() {
  
  	int n;
  	cin >> n;
  	VI ans = {1};
  
  	for(int i = 1; i <= n; i++) ans = mul(ans, i);
  
  	for(int i = ans.size() - 1; i >= 0; i--) cout << ans[i];

	return 0;
}
