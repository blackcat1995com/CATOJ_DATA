#include <iostream>
#include <cstdio>
#include <unordered_map>
using namespace std;

typedef long long LL;

const int MOD = 1e9 + 7;

int n;
unordered_map<int, int> primes;
LL ans = 1;

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
                primes[i]++;
            }
        }
        
        if(x > 1) primes[x]++;
    }

    
    for(auto x : primes){
        int a = x.first, b = x.second;
        LL t = 1;
        while(b--) t = (t * a + 1) % MOD;
        ans = ans * t % MOD;
    }

    cout << ans << endl;

	return 0;
}

