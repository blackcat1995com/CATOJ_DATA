#include <iostream>
#include <cstdio>
#include <queue>
#include <string>
#include <unordered_map>
using namespace std;

string str;
priority_queue<int, vector<int>, greater<int> > q;
unordered_map<char, int> mp;

int main() {

    getline(cin, str);
    
    for(auto x: str)
        mp[x]++;

    if(mp.size() == 1){
        printf("%.3lf\n", 1.0 / 8);
        return 0;
    }
    
    for(auto x: mp) q.push(x.second);
    
    int wpl = 0;
    while(q.size() > 1){
        int a = q.top(); q.pop();
        int b = q.top(); q.pop();
        
        int t = a + b;
        q.push(t);
        wpl += t;
    }
    
    printf("%.3lf\n", wpl *  1.0 / str.size() / 8);
    
	return 0;
}
