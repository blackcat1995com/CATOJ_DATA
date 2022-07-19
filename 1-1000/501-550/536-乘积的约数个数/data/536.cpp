#include <iostream>
#include <cstdio>
#include <unordered_map>
using namespace std;

const int MOD = 1e9 + 7;
typedef long long LL;

int n;
LL ans = 1;
unordered_map<int, int> mp;

int main() {
    
    freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        for(int i = 2; i <= x / i; i++){
            while(x % i == 0){
                x /= i;
                mp[i]++;
            }
        }
        if(x > 1) mp[x]++;
    }
    
    for(auto x : mp) ans = ans * (x.second + 1) % MOD;
    
    cout << ans << endl;

	return 0;
}

