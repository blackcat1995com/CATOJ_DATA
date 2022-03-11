#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

const int N = 5e4 + 10;

int n;
int sum[N];
vector<int> v[7];
int ans = 0; // 存储 % 7 == 0 的最大区间长度

int main() {

	cin >> n;
	for(int i = 1; i <= n; i++){
		int t;
		cin >> t;
		sum[i] = (t + sum[i - 1]) % 7;	// 0 - 6
		v[sum[i]].push_back(i);
	}

	for(int i = 0; i < 7; i++){
		if(i == 0 && v[0].size()){
			int len = v[0].size();
			ans = max(ans, v[0][len - 1]);
		}	
		else{
			if(v[i].size() >= 2){
				int t1 = v[i][0];

				int len = v[i].size();
				int t2 = v[i][len - 1];
				ans = max(ans, t2 - t1);
			}
		}
	}

	cout << ans << endl;
	
	return 0;
}


