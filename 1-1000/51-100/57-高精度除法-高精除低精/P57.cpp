#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> VI; 

VI div(VI& A, int b, int& r){
	VI C;
  
  	for(int i = 0; i < A.size(); i++){
    	r = r * 10 + A[i];
      	C.push_back(r / b);
      	r %= b;
    }
  
  	reverse(C.begin(), C.end());
  
  	while(C.size() > 1 && C.back() == 0) C.pop_back();
  
  	return C;
}

int main() {
  
  	string a;
  	int b, r = 0;
  	VI A;
  	cin >> a >> b;
  	for(int i = 0; i < a.size(); i++) A.push_back(a[i] - '0');
  
  	auto C = div(A, b, r);
  
  	for(int i = C.size() - 1; i >= 0; i--) cout << C[i];
  
  	cout << endl << r << endl;

	return 0;
}
