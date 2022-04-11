#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int n, m;
int f[35][1000] = {1};

int main() {

	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < n * (n + 1) / 2; j++)
			f[i][j] = f[i - 1][j + i] + f[i - 1][abs(j - i)];
	}

	if(m) cout << f[n][m] << endl;
	else cout << f[n][m] / 2 << endl;
	
	return 0;
}

