#include <iostream>
#include <cstdio>

using namespace std;

typedef long long LL;

const int N = 1e6 + 10;
const LL INF = 1e18;

int n, p;
LL f[N];

int main() {
    
    cin >> n >> p;
    
    LL s = 0, maxs = -INF;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        s = max(s, 0LL) + x;
        maxs = max(maxs, s);
        f[i] = maxs;
    }

    LL ans = f[1], score = f[1] * 2;
    for(int i = 2; i <= n; i++){
        ans = max(ans, score);
        score = max(score, score + f[i]);
    }
    
    cout << ans % p << endl;

	return 0;
}
