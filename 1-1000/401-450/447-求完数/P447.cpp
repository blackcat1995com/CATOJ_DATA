#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int n;
int cnt = 0;

bool is_ws(int n) {
    int res = 0;

    for (int i = 1; i <= n / i; i++) {
        if (n % i == 0) {
            res += i;
            if (i != n / i && i != 1) res += n / i;
        }
    }

    return n == res && n != 1;
}

int main() {

    cin >> n;

    for (int i = 1; i < n; i++) 
        if (is_ws(i)) {
            cout << i << endl;
            cnt++;
        }
            
    
    cout << "*" << cnt << endl;
    
    

	return 0;
}
