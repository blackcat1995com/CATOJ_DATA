#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

const int N = 2010;

struct Node{
    int v, w;
};

int n, m;
int f[N];
vector<Node> nodes;

int main() {
    
    cin >> n >> m;
    
    while(n--){
        int v, w, s;
        cin >> v >> w >> s;
        for(int k = 1; k <= s; k *= 2){
            s -= k;
            nodes.push_back({v * k, w * k});
        }
        if(s > 0) nodes.push_back({v * s, w  * s});
    }
    
    for(auto node : nodes){
        for(int j = m; j >= node.v; j--)
            f[j] = max(f[j], f[j - node.v] + node.w);
    }
    
	cout << f[m] << endl;
	
	return 0;
}

