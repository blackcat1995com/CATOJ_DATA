#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
using namespace std;

string str;
queue<string> q;
int k;
char rules[20][2];
bool book[10010];

int res;

void bfs(){
    book[stoi(str)] = true;
    q.push(str);
    res = 1;
    
    while(q.size()){
        for(int i = 1; i <= k; i++){
            string headstr = q.front();
            
            for(int j = 0; j < headstr.size(); j++){
                if(headstr[j] == rules[i][0]){
                    string newstr = headstr;
                    newstr[j] = rules[i][1];
                    
                    if(!book[stoi(newstr)]){
                        res++;
                        book[stoi(newstr)] = true;
                        q.push(newstr);
                    }
                }
            }
        }
        q.pop();
    }
}

int main() {

	cin >> str >> k;
    for(int i = 1; i <= k; i++) cin >> rules[i][0] >> rules[i][1];
    
    bfs();
    
    cout << res << endl;
    
	return 0;
}
