#include <iostream>
#include <cstdio>
using namespace std;

const int N = 35;

int n;
int a[N][N];
int cnt = 0;

int main() {

	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = i; j >= 1; j--){
			a[i + 1 - j][j] = ++cnt;
		}
	}

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n + 1 - i; j++)
			printf("%5d", a[i][j]);
		puts("");
	}
	
	return 0;
}


