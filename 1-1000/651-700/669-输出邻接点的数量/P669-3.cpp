#include <iostream>
#include <cstdio>
#include <vector>
#include <unordered_set>
using namespace std;

const int N = 110;

vector<int> h[N];
int n, m;

int main() {

    cin >> n >> m;
    while(m--){
        int a, b;
        cin >> a >> b;
        h[a].push_back(b);
        h[b].push_back(a);
    }
    
    int q;
    cin >> q;
    while(q--){
        int v;
    	cin >> v;
        
        unordered_set<int> st;
        
        for(auto x: h[v]) st.insert(x);
        
        cout << st.size() << endl;
    }

	return 0;
}
