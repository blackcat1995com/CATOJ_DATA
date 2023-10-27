#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

const int N = 1010;

int n, d;
int a[N];

int main() {
	
	cin >> n >> d;
	
	for(int i = 1; i <= d; i++){
		int x;
		cin >> x;
		a[x] += i;
	}
	
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";

	return 0;
}

