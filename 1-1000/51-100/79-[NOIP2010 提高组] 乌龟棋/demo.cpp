#include <iostream>
#include <cstdio>
using namespace std;

const int N = 41, M = 360;
int n, m;
int a[M], b[5];
int f[N][N][N][N];

int main() {

	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);

	while(m--){
		int x;
		scanf("%d", &x);
		b[x]++;
	}

	for(int A = 0; A <= b[1]; A++)
		for(int B = 0; B <= b[2]; B++)
			for(int C = 0; C <= b[3]; C++)
				for(int D = 0; D <= b[4]; D++){
					int score = a[A * 1 + B * 2 + C * 3 + D * 4 + 1];
					int& v = f[A][B][C][D];
					v = score;
					if(A) v = max(v, f[A - 1][B][C][D] + score);
					if(B) v = max(v, f[A][B - 1][C][D] + score);
					if(C) v = max(v, f[A][B][C - 1][D] + score);
					if(D) v = max(v, f[A][B][C][D - 1] + score);
				}
	printf("%d\n", f[b[1]][b[2]][b[3]][b[4]]);
	
	return 0;
}

