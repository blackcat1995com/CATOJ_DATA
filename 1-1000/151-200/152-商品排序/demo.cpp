#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010;

int n;
int a[N];

int main() {

	cin >> n;
	for(int i = 1; i <= n; i++){
		int t;
		cin >> t;
		a[t]++;
	}

	for(int i = 0; i <= 1000; i++){
		while(a[i]--) cout << i << endl;
	}
	
	return 0;
}
