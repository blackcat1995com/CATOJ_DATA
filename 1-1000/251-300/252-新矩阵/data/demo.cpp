#include <iostream>
#include <cstdio>
using namespace std;

const int N = 25;

int n;
int a[N][N];

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			if(i == j) a[i][j] += 10;
			if(i + j == n + 1) a[i][j] += 10;
		}

	if(n % 2 == 1) a[n + 1 >> 1][n + 1 >> 1] -= 10;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		puts("");
	}


	
	return 0;
}


