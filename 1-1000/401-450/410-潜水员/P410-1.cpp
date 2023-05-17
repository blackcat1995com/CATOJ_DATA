#include <iostream>
#include <cstring>
using namespace std;

const int N = 1010;

int V1, V2;
int n;

int f[N][25][85];

int main() {

	cin >> V1 >> V2 >> n;
	memset(f, 0x3f, sizeof f);

	for (int i = 0; i <= n; i++) f[i][0][0] = 0;

	for (int i = 1; i <= n; i++) {
		int v1, v2, w;
		cin >> v1 >> v2 >> w;
		for (int j = 0; j <= V1; j++) {
			for (int k = 0; k <= V2; k++) {	
				f[i][j][k] = min(f[i - 1][j][k], w + f[i - 1][max(j - v1, 0)][max(k - v2, 0)]);
			}
		}
	}

	cout << f[n][V1][V2] << endl;

	return 0;
}
