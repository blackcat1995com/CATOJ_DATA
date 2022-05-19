#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

typedef vector<int> VI;

bool cmp(VI& A, VI& B){
	if(A.size() != B.size()) return A.size() > B.size();
  	for(int i = A.size() - 1; i >= 0; i--){
    	if(A[i] != B[i])
          	return A[i] > B[i];
    }
  
  	return true;
}

VI sub(VI& A, VI& B){
	VI C;
  	int t = 0;
  	for(int i = 0; i < A.size(); i++){
    	t = A[i] - t;
      	if(i < B.size()) t -= B[i];
      	C.push_back((t + 10) % 10);
      	if(t < 0) t = 1;
      	else t = 0;
    }
  	while(C.size() > 1 && C.back() == 0) C.pop_back();
  
  	return C;
}

VI div(VI& A, VI& B, VI& R){
	VI C;
  	int j = B.size();
  	R.assign(A.end() - j, A.end());
  	while(j <= A.size()){
    	int k = 0;
      	while(cmp(R, B)){
        	VI tmp = sub(R, B);
          	R.assign(tmp.begin(), tmp.end());
          	k++;
        }
      	C.push_back(k);
      	if(j < A.size()) R.insert(R.begin(), A[A.size() - j - 1]);
      	while(R.size() > 1 && R.back() == 0) R.pop_back();
      	j++;
    }
  
  	reverse(C.begin(), C.end());
  	while(C.size() > 1 && C.back() == 0) C.pop_back();
   	return C;
}

int main() {
  
  	string a, b;
  	cin >> a >> b;
  	VI A, B, R;
  
  	for(int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
  	for(int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');
  
  	auto C = div(A, B, R);
  
  	for(int i = C.size() - 1; i >= 0; i--) cout << C[i];
  	puts("");
  	for(int i = R.size() - 1; i >= 0; i--) cout << R[i];

	return 0;
}

