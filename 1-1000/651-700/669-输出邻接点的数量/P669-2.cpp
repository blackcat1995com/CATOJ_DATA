#include <iostream>
#include <cstdio>
#include <cstring>
#include <unordered_set>
using namespace std;

const int N = 110, M = 1010;

int n, m;
int h[N], to[M], ne[M], idx = 0;

void add(int a, int b){
    to[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

int main() {

    cin >> n >> m;
    
    memset(h, -1, sizeof h);
    
    for(int i = 1; i <= m; i++){
        int a, b;
        cin >> a >> b;
        
        add(a, b);
        add(b, a);
    }
	
    int q;
    cin >> q;
    while(q--){
    	int v;
        cin >> v;
        
        unordered_set<int> st;
        // j Îª±ßµÄÐòºÅ
        for(int j = h[v]; ~j; j = ne[j])
            st.insert(to[j]);
        
        cout << st.size() << endl;
    }
    
	return 0;
}
