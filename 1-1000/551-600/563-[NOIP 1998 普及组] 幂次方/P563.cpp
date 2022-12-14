#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string dfs(int n){
    string res;
    for(int i = 14; i >= 0; i--){
        if(n >> i & 1){
            if(res.size()) res += "+";
            
            if(!i) res += "2(0)";
            else if(i == 1) res += "2";
            else res += "2(" + dfs(i) + ")";
        }
    }
    
    return res;
}

int main() {

	int n;
    cin >> n;
    
    cout << dfs(n) << endl;
    
	return 0;
}

