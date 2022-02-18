#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    
    freopen("4.in", "r", stdin);
	freopen("4.out", "w", stdout);
    string s;
    int ans = 0;
    for(int i = 1; i <= 5; i++){
        cin >> s;
        if(s[0] == s[2] && s[1] == s[3] - 1)
            ans++;
    }
    
    cout << ans << endl;
	
	return 0;
}


