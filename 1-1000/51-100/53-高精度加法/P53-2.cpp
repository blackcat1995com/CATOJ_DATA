#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

string s1, s2;
vector<int> A, B, C;

vector<int> add(vector<int>& A, vector<int>& B){
    vector<int> C;
    /*
        123456
        111
    */
    if(A.size() < B.size()) return add(B, A);

    int k = 0;
    for(int i = 0; i < A.size(); i++){
        int t = A[i] + k;
        if(i < B.size()) t += B[i];
        k = t / 10;
        C.push_back(t % 10);
    }

    if(k) C.push_back(1);

    while(C.back() == 0 && C.size() > 1) C.pop_back();

    return C;
}

int main() {

    cin >> s1 >> s2;
    for(int i = s1.size() - 1; i >= 0; i--) A.push_back(s1[i] - '0');
    for(int i = s2.size() - 1; i >= 0; i--) B.push_back(s2[i] - '0');

    C = add(A, B);

    for(int i = C.size() - 1; i >= 0; i--) cout << C[i];
	
	return 0;
}
