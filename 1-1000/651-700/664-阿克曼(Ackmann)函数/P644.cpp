#include <iostream>
#include <cstdio>
using namespace std;

typedef unsigned long long ULL;

ULL akm(int m, int n){
	if(!m) return n + 1;
    if(m && !n) return akm(m - 1, 1);
    return akm(m - 1, akm(m, n - 1));
}

int main() {

	int m, n;
    cin >> m >> n;
    
    cout << akm(m, n) << endl;
    
	return 0;
}

