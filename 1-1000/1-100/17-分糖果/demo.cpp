#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	int n, L, R;
    cin >> n >> L >> R;
    int len = R - L + 1;
    if(len >= n) cout << n - 1 << endl;
    else{
        int l = L % n;
        int r = R % n;
        if(l <= r) cout << r << endl;
        else cout << n - 1 << endl;
    }

	return 0;
}
