#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;
const int N = 1e5 + 10;

int n, k;
int sum[N];
LL cnt[N] = {1};

LL ans = 0;

int main() {
    
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        sum[i] = (x + sum[i - 1]) % k;
        ans += cnt[sum[i] % k];
        cnt[sum[i] % k]++;
    }

    cout << ans << endl;
	
	return 0;
}


