#include <iostream>
#include <cstdio>
using namespace std;

const int N = 5e4 + 10;

int n;
int sum[N];

int ans = 0; // 存储 % 7 == 0 的最大区间长度

int main() {

	cin >> n;
	for(int i = 1; i <= n; i++){
		int t;
		cin >> t;
		sum[i] = (t + sum[i - 1]) % 7;
	}

	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			int s = sum[j] - sum[i - 1];
			if(s % 7 == 0)
				ans = max(ans, j - i + 1);
		}
	}

	cout << ans << endl;
	
	return 0;
}
