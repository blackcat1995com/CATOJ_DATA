#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;
const int N = 3e6 + 10;

LL n, p, inv[N];

void exgcd(ll a, ll b, ll &x, ll &y, ll &d)
{
    if (!b)
    {
        d = a;
        x = 1;
        y = 0;
        return;
    }
    exgcd(b, a % b, x, y, d);
    ll temp = x;
    x = y;
    y = temp - (a / b) * y;
}
int main()
{
    ll a, b, x, y, d;
    cin >> a >> b;
    exgcd(a, b, x, y, d);
    x = (x % b + b) % b; //防止出现负数
    cout << "a关于模b的逆元为: " << x << endl;
    return 0;
}

