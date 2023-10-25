#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(char a, char b){
	return a > b;
}

int change(int n){
	string str = to_string(n);
	string A = str;
	sort(A.begin(), A.end());
	string B = str;
	sort(B.begin(), B.end(), cmp);
//	cout << A << endl;
//	cout << B << endl;
	int a = stoi(A), b = stoi(B);
	return b - a;
}

int main() {

	int n;
	cin >> n;
	
	int res = 0;
	while(n != 495){
		res++;
		n = change(n);
	}
//	cout << change(n);
	cout << res << endl;
	return 0;
}

