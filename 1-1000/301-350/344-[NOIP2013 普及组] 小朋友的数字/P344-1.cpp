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

    LL ans[2] = {f[1]}, score[2] = {f[1] * 2};
    for(int i = 2; i <= n; i++){
       if(ans[1] < score[1] || (ans[1] == score[1] && ans[0] < score[0]))
            ans[0] = score[0], ans[1] = score[1];
        
        if(f[i] > 0){
            score[0] += f[i];
            score[1] += score[0] / INF;
            score[0] %= INF;
        }
    }
    
    cout << (ans[1] * (INF % p) + ans[0]) % p << endl;

	return 0;
}

