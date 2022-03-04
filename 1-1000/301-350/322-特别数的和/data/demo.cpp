#include <iostream>
#include <cstdio>
using namespace std;


bool check(int x){
    while(x){
        int t = x % 10;
        if(t == 2 || t == 0 || t == 1 || t == 9)
            return true;
        x /= 10;
    }
    return false;
}

int main() {
    freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    int n, ans = 0;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        if(check(i)){
            ans += i;
        }
    }
    
    cout << ans << endl;
	
	return 0;
}


