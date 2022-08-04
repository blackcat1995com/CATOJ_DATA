#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
  
  	string A, B;
  	double v;
  	int cnt = 0;
  	cin >> v >> A >> B;
  	for(int i = 0; i < A.size(); i++)
      	if(A[i] == B[i]) cnt++;
  
  	cnt * 1.0 / A.size() >= v ? puts("yes") : puts("no");

	return 0;
}

