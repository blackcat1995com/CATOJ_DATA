#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int n;
vector<int> v[5010];

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
  
  	cin >> n;
  	v[1] = {1};
  	v[2] = {2};
  
  	for(int i = 3; i <= n; i++)
      	v[i] = add(v[i - 1], v[i - 2]);
  
  	for(int i = v[n].size() - 1; i >= 0; i--) cout << v[n][i];

	return 0;
}

