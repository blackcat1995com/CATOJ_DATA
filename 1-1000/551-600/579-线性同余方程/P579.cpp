#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

LL exgcd(LL a, LL b, LL& x, LL& y){
    if(!b){
        x = 1, y = 0;
        return a;
    }
    
    LL d = exgcd(b, a % b, y, x);
    y -= a / b * x;
    return d;
}
int main() {
    
    freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    LL n;
    cin >> n;
    
    while(n--){
        LL a, b, x, y;
        cin >> a >> b;
        LL d = exgcd(a, b, x, y);
        if(1 % d) puts("-1");
        else cout << (x + b) % b << endl;
    }
    
	return 0;
}

