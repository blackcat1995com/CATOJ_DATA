#include <iostream>
#include <cstring>
using namespace std;

int V1, V2, n;
int f[25][85];

int main() {

	cin >> V1 >> V2 >> n;
	memset(f, 0x3f, sizeof f);
	f[0][0] = 0;

	while (n--) {
		int v1, v2, w;
		cin >> v1 >> v2 >> w;
		for (int j = V1; j >= 0; j--)
			for (int k = V2; k >= 0; k--)
				f[j][k] = min(f[j][k], w + f[max(0, j - v1)][max(0, k - v2)]);
	}

	cout << f[V1][V2] << endl;

	return 0;
}

