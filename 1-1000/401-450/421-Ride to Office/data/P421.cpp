#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int INF = 0x3f3f3f3f;

int main() {
	
	freopen("5.in", "r", stdin);
	freopen("5.out", "w", stdout);

    int n;
    while(cin >> n, n){
        int v, t;
        double total, ans = INF;

        for(int i = 1; i <= n; i++){
            cin >> v >> t;
            if(t < 0) continue;
            total = 4.5 / v * 3600;
            total = ceil(total) + t;
            ans = min(ans, total);
        }

        cout << (int)ans << endl;
    }

	return 0;
}
