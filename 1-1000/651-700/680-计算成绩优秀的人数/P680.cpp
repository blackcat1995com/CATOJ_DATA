#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int n, res = 0;
	cin >> n;
    
    while(n--){
        int t;
        cin >> t;
        if(t >= 85) res++;
    }
    
    cout << res << endl; 
	return 0;
}


