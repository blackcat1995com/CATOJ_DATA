#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int n;
string str;

int main() {
    
    cin >> n >> str;
    
    int len = str.size();
    
    for(int i = 0; i < len; i++){
        if(str[i] == '0') continue;
        if(i) cout << "+";
        printf("%d*%d^%d", str[i] - '0', n, len - i - 1);
        
    }

	return 0;
}

