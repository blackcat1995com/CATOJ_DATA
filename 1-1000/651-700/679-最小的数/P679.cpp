#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	int a, b, c;
    cin >> a >> b >> c;
    
    int res = 1e8 + 10;
    
    if(a < res) res = a;
    if(b < res) res = b;
    if(c < res) res = c;
    
    cout << res << endl;
	return 0;
}


