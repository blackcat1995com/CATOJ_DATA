#include <iostream>
#include <cstdio>
#include <queue>
#include <string>
#include <unordered_map>
using namespace std;

const int N = 2010;

struct Node{
    int w;
    int left, right;
}node[N];

int p = 0;
string str;

struct Cmp{
    bool operator () (int a, int b){
        return node[a].w > node[b].w;
    }
};

priority_queue<int, vector<int>, Cmp> q;
unordered_map<char, int> mp;

int wpl = 0;

int buildHFM(){
    while(q.size() > 1){
        int a = q.top(); q.pop();
        int b = q.top(); q.pop();
        
        int np = ++p;
        node[np].w = node[a].w + node[b].w;
        node[np].left = a, node[np].right = b;
        q.push(np);
    }
    
    return q.top();
}

int calc(int u, int depth){
	if(!u) return 0;
    
    if(!node[u].left && !node[u].right){
        wpl += depth * node[u].w;
        return wpl;
    }
    
    return calc(node[u].left, depth + 1) + calc(node[u].right, depth + 1);
}

int main() {

    getline(cin, str);
    
    for(auto x: str)
        mp[x]++;

    if(mp.size() == 1){
        printf("%.3lf\n", 1.0 / 8);
        return 0;
    }
    
    for(auto x: mp){
		int np = ++p;
        node[np].w = x.second;
        q.push(np);
    }
    
    int root = buildHFM();
     
   	calc(root, 0);
    printf("%.3lf\n", wpl *  1.0 / str.size() / 8);
    
	return 0;
}
