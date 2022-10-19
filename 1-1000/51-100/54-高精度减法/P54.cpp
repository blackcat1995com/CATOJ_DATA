#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

string s1, s2;
vector<int> A, B, C;

bool cmp(vector<int>& A, vector<int>& B) {
	if (A.size() != B.size()) return A.size() > B.size();

	for (int i = A.size() - 1; i >= 0; i--)
		if (A[i] != B[i])
			return A[i] > B[i];

	return false;
}

vector<int> sub(vector<int>& A, vector<int>& B) {
	vector<int> C;
	if (!cmp(A, B)) {
		cout << "-";
		return sub(B, A);
	}

	int k = 0;
	for (int i = 0; i < A.size(); i++) {
		int t = A[i] - k;
		if (i < B.size()) t -= B[i];
		C.push_back((t + 10) % 10);
		if (t < 0) k = 1;
		else k = 0;
	}

	while (!C.back() && C.size() > 1) C.pop_back();

	return C;
}
int main() {

	cin >> s1 >> s2;
	for (int i = s1.size() - 1; i >= 0; i--) A.push_back(s1[i] - '0');
	for (int i = s2.size() - 1; i >= 0; i--) B.push_back(s2[i] - '0');

	//cout << cmp(A, B) << endl;
	C = sub(A, B);

	for (int i = C.size() - 1; i >= 0; i--) cout << C[i];

	return 0;
}

