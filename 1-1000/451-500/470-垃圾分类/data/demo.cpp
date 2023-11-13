#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
using namespace std;

map<string, int> mp;
vector<string> v = { "FOOD WASTE", "RECYCLABLE", "HAZARDOUS", "RESIDUAL WASTE" };
int cnt[5];
int main() {
//	freopen("5.in", "r", stdin);
//	freopen("5.out", "w", stdout);
	mp["leaves"] = 0;
	mp["watermelon peel"] = 0;
	mp["leftovers"] = 0;

	mp["paper box"] = 1;
	mp["plastic bottle"] = 1;
	mp["clothes"] = 1;

	mp["rechargeable battery"] = 2;
	mp["abandoned medicine"] = 2;
	mp["disinfectant"] = 2;

	mp["mask"] = 3;
	mp["battery"] = 3;
	mp["plastic bag"] = 3;

	int n;

	cin >> n;
	cin.ignore();

	while (n--) {
		string s;
		getline(cin, s);
		cnt[mp[s]]++;
	}

	int maxv = -1, idx = -1;

	for(int i = 0; i < 4; i++)
		if (cnt[i] > maxv) {
			maxv = cnt[i];
			idx = i;
		}
	
	cout << v[idx] << endl << cnt[idx] << endl;

	return 0;
}
