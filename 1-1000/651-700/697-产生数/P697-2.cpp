#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
#include <set>
using namespace std;

string str;
queue<string> q;
int k;
char rules[20][2];
set<string> st;

void dfs(string str){
	st.insert(str);
    
    for(int i = 0; i < str.size(); i++){
        char pre_ch = str[i];
        
        for(int j = 1; j <= k; j++){
            if(str[i] == rules[j][0]){
                str[i] = rules[j][1];
                if(st.find(str) == st.end())
                    dfs(str);
                str[i] = pre_ch;
            }
        }
    }
}

int main() {

	cin >> str >> k;
    for(int i = 1; i <= k; i++) cin >> rules[i][0] >> rules[i][1];
    
    dfs(str);
    
    cout << st.size() << endl;
    
	return 0;
}
