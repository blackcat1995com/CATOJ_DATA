#include <iostream>
#include <cstdio>
using namespace std;

int a, b, p, k;

int calc(int p) {

	if (p == 0) return 1;

	int t = calc(p / 2) % k;

    t = t * t % k;
	if (p & 1) t = t * b % k;
	
    return t;
}


int main() {

	
	cin >> b >> p >> k;

    int a = b;
    b %= k;
    
	printf("%d^%d mod %d=%d\n", a, p, k, calc(p));

	return 0;
}

