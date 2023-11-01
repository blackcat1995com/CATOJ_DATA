#include <iostream>
#include <cstdio>
using namespace std;

int n, m;
int res = 0;

bool is_huiwen(int n){
    int a[10] = {0}, idx = 0;
    while(n){
        a[++idx] = n % 9;
        n /= 9;
    }
    
    for(int i = 1; i <= (idx + 1) / 2; i++)
        if(a[i] != a[idx - i + 1])
            return false;
    
    for(int i = 1; i <= idx; i++)
        if(a[i] % 2 == 0)
            return false;
    
    return true;
}

int main() {
	
    cin >> n >> m;
    
    for(int i = n; i <= m; i++)
        if(is_huiwen(i))
            res++;
            
	cout << res << endl;
    
	return 0;
}
