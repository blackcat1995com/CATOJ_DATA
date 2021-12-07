#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

vector<int> add(vector<int> &A, vector<int> &B);
int main() {
	
	string a, b;
	vector<int> A, B;
	
	cin >> a >> b;
	
	for(int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
	for(int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');
	
	vector<int> C = add(A, B);
	
	for(int i = C.size() - 1; i >= 0; i--) cout << C[i];
	
	return 0;
}

vector<int> add(vector<int> &A, vector<int> &B){
    
    vector<int> C;
    if(A.size() < B.size()) return add(B, A);
    
    int t = 0;
    for(int i = 0; i< A.size(); i++){
        t += A[i];
        if(i < B.size()) t += B[i];
        C.push_back(t % 10);
        t /= 10;
    }
    
    if(t) C.push_back(1);
    
    while(C.back() == 0 && C.size() > 1) C.pop_back();
    
    return C;
}
