#include <iostream>
#include <cstdio>
using namespace std;

bool check(int n){
    
    if(n % 7 == 0)
        return false;
    
    while(n){
        if(n % 10 == 7)
            return false;
        n /= 10;
    }
    
    return true;
}

int main() {

	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	
	int n;
    cin >> n;
    
    int res = 0;
    
    for(int i = 1; i <= n; i++)
        if(check(i))
            res += i * i;
    
    cout << res << endl;
    
	return 0;
}


