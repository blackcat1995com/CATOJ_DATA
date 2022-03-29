#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010;

int ans = 0;
int T[N]; // ¸¨ÖúÊı×é

int dfs(int n){

	if(T[n]) return T[n];

	T[n] = 1;
	for(int i = 1; i <= n / 2; i++)
		T[n] += dfs(i);
	
	return T[n];
}

int main() {

	int n;
	cin >> n;
	dfs(n);
	cout << T[n] << endl;

	return 0;
}


