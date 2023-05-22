#include <iostream>
using namespace std;

int N, M, K;
int f[2][1010][510];

int main() {

	cin >> N >> M >> K;

	for (int k = 1; k <= K; k++) {
		int t1, t2;
		cin >> t1 >> t2;
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= M - 1; j++) {
				if (i >= t1 && j >= t2)
					f[k & 1][i][j] = max(f[(k - 1) & 1][i][j], 1 + f[(k - 1) & 1][i - t1][j - t2]);
				else
					f[k & 1][i][j] = f[(k - 1) & 1][i][j];
			}
		}
	}

	cout << f[K & 1][N][M - 1] << " ";

	int t = M - 1;

	while (t > 0 && f[K & 1][N][M - 1] == f[K & 1][N][t - 1]) t--;

	cout << M - t << endl;

	return 0;
}
