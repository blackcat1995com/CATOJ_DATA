#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

typedef vector<int> VI;

VI mul(VI& A, VI& B){
	VI C(A.size() + B.size() + 10, 0);
  	
  	for(int i = 0; i < B.size(); i++){
    	for(int j = 0; j < A.size(); j++)
          	C[i + j] += A[j] * B[i];
    }
  
  	int t = 0;
  	for(int i = 0; i < C.size(); i++){
    	t += C[i];
      	C[i] = t % 10;
      	t /= 10;
    }
  
  	while(C.size() > 1 && C.back() == 0) C.pop_back();
  
  	return C;
}

int main() {
  
  	string a, b;
  	VI A, B;
  	cin >> a >> b;
  	
  	for(int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
  	for(int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');
  
  	auto C = mul(A, B);
  
  	for(int i = C.size() - 1; i >= 0; i--) cout << C[i];

	return 0;
}

