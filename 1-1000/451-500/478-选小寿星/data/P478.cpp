#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> PII;

int m, n; // m个人，数到n
vector<PII> v;

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	
	cin >> m;

	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		if (x) v.push_back({ i + 1, 1 });
		else v.push_back({ i + 1, 2 });
	}
	
	cin >> n;

	/*cout << m << " " << n << endl;
	for (auto x : v)
		cout << x.first << " " << x.second << endl;*/

	int idx = 0, cnt = 0;
	while (v.size() > 1) {

		cnt++;
		if (cnt == n) {	// 如果计数器 = n
			if (v[idx].second == 1) {
				//cout << v[idx].first << " ";
				v.erase(v.begin() + idx);
				cnt = 0;
			}
			else {
				v[idx].second = 1;
				idx = (idx + 1) % v.size();	
				cnt = 0;
			}
				
		}
		else
			idx = (idx + 1) % v.size();
	}

	cout << v[0].first << endl;
	return 0;
}

/*
5
1 1 0 0 1
3
*/
