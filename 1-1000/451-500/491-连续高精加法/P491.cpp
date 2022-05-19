#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;


vector<int> add(vector<int>& A, vector<int>& B){
	vector<int> C;
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

int main() {
  
  	vector<int> ans = {0};
  
  	string str;
  	while(cin >> str){
    	vector<int> v;
      	for(int i = str.size() - 1; i >= 0; i--) v.push_back(str[i] - '0');
      	ans = add(ans, v);
    }
  
  	for(int i = ans.size() - 1; i >= 0; i--) cout << ans[i];

	return 0;
}

