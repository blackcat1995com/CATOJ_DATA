#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    
    a /= 3, b += a, e += a;
    b /= 3, c += b, a += b;
	c /= 3, d += c, b += c;
    d /= 3, e += d, c += d;
    e /= 3, a += e, d += e;
    
    cout << a << " " << b << " " << c << " " << d << " " << e << endl;
    
	return 0;
}

