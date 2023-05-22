#include <iostream>
using namespace std;

int N, M, K;
int f[1010][510];

int main() {

	cin >> N >> M >> K;

	while(K--) {
		int t1, t2;
		cin >> t1 >> t2;
		for(int i = N; i >= t1; i--)
			for(int j = M - 1; j >= t2; j--)
				f[i][j] = max(f[i][j], 1 + f[i - t1][j - t2]);
	}

	cout << f[N][M - 1] << " ";

	int t = M - 1;

	while (t > 0 && f[N][M - 1] == f[N][t - 1]) t--;

	cout << M - t << endl;

	return 0;
}

