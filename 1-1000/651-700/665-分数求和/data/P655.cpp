#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

const int N = 15;

int n;
int a[N], b[N];
int A, B;

int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;
}

int main() {

	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	
    cin >> n;
    
    for(int i = 1; i <= n; i++)
        scanf("%d/%d", &a[i], &b[i]);
    
    A = a[1], B = b[1];
    
    for(int i = 2; i <= n; i++){
        int lcm = B * b[i] / gcd(B, b[i]);
        A = lcm / B * A + lcm / b[i] * a[i];
        B = lcm;
        
        int d = gcd(A, B);
        A /= d;
        B /= d;
    }
    
    if(B == 1) cout << A << endl;
    else cout << A << "/" << B << endl;
    // cout << A << " " << B  << endl;
    // cout << gcd(12, 18) << endl;
    /*
    for(int i = 1; i <= n; i++)
        cout << a[i] << " " << b[i] << endl;
    */

	return 0;
}

