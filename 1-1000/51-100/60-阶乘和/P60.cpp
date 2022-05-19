#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

typedef vector<int> VI;

VI add(VI& A, VI& B){
	VI C;
  	if(A.size() < B.size()) return add(B, A);
  
  	int t = 0;
  	for(int i = 0; i < A.size(); i++){
    	t += A[i];
      	if(i < B.size()) t += B[i];
      	C.push_back(t % 10);
      	t /= 10;
    }
  
  	if(t) C.push_back(1);
  
  	return C;
}

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
  	VI ans = {0}, tmp = {1};
  
  	for(int i = 1; i <= n; i++){
    	tmp = mul(tmp, i);
      	ans = add(ans, tmp);
    }
  
  	for(int i = ans.size() - 1; i >= 0; i--) cout << ans[i];

	return 0;
}

