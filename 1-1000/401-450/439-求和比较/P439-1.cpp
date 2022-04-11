#include <iostream>
#include <cstdio>
using namespace std;

int n, m;
int a[35];
int ans = 0;

int main() {

	cin >> n >> m;
	for(int i = 0; i < n; i++) a[i] = i + 1;
	for(int i = 0; i < 1 << n; i++){
		int s1 = 0, s2 = 0;
		for(int j = 0; j < n; j++){
			if(i >> j & 1) s1 += a[j];
			else s2 += a[j];
		}
		if(abs(s1 - s2) == m) ans++;
	}
	
	cout << ans / 2 << endl;

	return 0;
}

