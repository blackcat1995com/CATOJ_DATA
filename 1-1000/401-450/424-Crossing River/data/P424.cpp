#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int a[1010];

int main() {

    int t;
    cin >> t;

    while(t--){
        int ans = 0, n;
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1);
        while(n >= 4){
            ans += min(2*a[1]+a[n-1]+a[n], a[1]+2*a[2]+a[n]);
            n -= 2;
        }

        if(n == 3) ans += a[1] + a[2] + a[3];
        else if(n == 2) ans += a[2];
        else if(n == 1) ans += a[1];

        cout << ans << endl;
    }

	return 0;
}
