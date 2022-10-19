#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string s1;
int b, r = 0;
vector<int> A;

vector<int> div(vector<int>& A, int b, int& r) {

	vector<int> C;

	for (int i = 0; i < A.size(); i++) {
		int t = r * 10 + A[i];
		C.push_back(t / b);
		r = t % b;
	}

	reverse(C.begin(), C.end());

	while (!C.back() && C.size() > 1) C.pop_back();

	return C;
}

int main() {

	cin >> s1 >> b;
	for (int i = 0; i < s1.size(); i++) A.push_back(s1[i] - '0');

	vector<int> C = div(A, b, r);

	for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
	cout << endl << r << endl;

	return 0;
}

