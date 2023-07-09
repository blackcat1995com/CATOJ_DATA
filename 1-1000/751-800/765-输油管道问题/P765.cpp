#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

const int N = 10005;

int n;
int a[N];

int main() {
    
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i] >> a[i];
    
    sort(a + 1, a + n + 1);
    
    int res = 0;
    
    for(int i = 1; i <= n; i++)
        res += abs(a[i] - a[(n + 1) / 2]);
    
    cout << res << endl;
    
	return 0;
}

