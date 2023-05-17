#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> PII;

const int N = 6010;

int n, m;
vector<PII> vec;
int f[N];

int main() {

	cin >> n >> m;

	while (n--) {
		int p, v, s;
		cin >> p >> v >> s;
		for (int i = 1; i <= s; i *= 2) {
			s -= i;
			vec.push_back({ i * p,i * v });
		}

		if (s > 0)
			vec.push_back({ s * p,s * v });
	}

	for (auto x : vec) {
		int p = x.first, v = x.second;
		for (int j = m; j >= p; j--)
			f[j] = max(f[j], v + f[j - p]);
	}

	cout << f[m] << endl;

	return 0;
}

