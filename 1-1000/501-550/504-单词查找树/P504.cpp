/*
A     1
ABC   2
ABCD  1
ABCE  1   =>   5

ABC   3
ABCD  1
A     0
ABCE  3  =>    7
∞¥’’◊÷µ‰–Ú≈≈¡–
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

string words[10010];
int n = 1;

int main() {
    
    while(cin >> words[n++]);
    n--;
	
    sort(words + 1, words + n + 1);
    // for(int i = 1; i <= n; i++) cout << words[i] << endl;
    // cout << "xxx" << endl;
    int res = words[1].size();
    
    for(int i = 2; i <= n; i++){
        int j = 0;
        while(j < words[i - 1].size()){
            if(words[i][j] != words[i - 1][j])
                break;
            j++;
        }
        res += words[i].size() - j;
    }
    
    cout << res + 1 << endl;

	return 0;
}

