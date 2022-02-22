#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    int n, ans = 0;
    cin >> n;
    for(int i = 1; i < n; i++)
        if(i * i % n * 2 < n)
            ans++;
            
    cout << ans << endl;
	
	return 0;
}


