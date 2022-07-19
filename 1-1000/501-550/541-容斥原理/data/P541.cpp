#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

int n, m, ans = 0;
int primes[20];

int main() {
    freopen("5.in", "r", stdin);
	freopen("5.out", "w", stdout);
    cin >> n >> m;
    for(int i = 0; i < m; i++) cin >> primes[i];
    
    for(int i = 1; i < 1 << m; i++){
        int k = 1, cnt = 0;
        for(int j = 0; j < m; j++){
            if(i >> j & 1){
                cnt++;
                if((LL)k * primes[j] > n){
                    k = -1;
                    break;
                }
                k *= primes[j];
            }
        }
        
        if(k != -1){
            if(cnt & 1) ans += n / k;
            else ans -= n / k;
        }
    }
    
    cout << ans << endl;

	return 0;
}

