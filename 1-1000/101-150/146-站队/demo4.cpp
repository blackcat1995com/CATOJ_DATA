#include <iostream>
#include <cstdio>
using namespace std;

const int N = 210;

int n;
int a[N];

int main() {

	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];

	for(int i = 2; i <= n; i++){
		int t = a[i];
		int k = 1;
		while(a[k] <= t && k < i) k++;
		for(int j = i - 1; j >= k; j--) a[j + 1] = a[j];
		a[k] = t;
	}

	for(int i = 1; i <= n; i++) cout << a[i] << " ";
	
	return 0;
}

