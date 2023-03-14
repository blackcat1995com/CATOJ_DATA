#include <iostream>
#include <cstdio>
using namespace std;

const int N = 5010;

int n, m, k;
int p[N];

int find(int x){
    if(p[x] != x) return find(p[x]);
    return x;
}

void init(){
    for(int i = 1; i <= n; i++) p[i] = i;
}

void merge(int a, int b){
    int pa = find(a), pb = find(b);
    if(pa != pb) p[pa] = pb;
}

int main() {

    cin >> n >> m >> k;
    
    init();
    
    while(m--){
        int a, b;
        cin >> a >> b;
        merge(a, b);
    }
    
    while(k--){
        int a, b;
        cin >> a >> b;
        int pa = find(a), pb = find(b);
        cout << (pa == pb? "Yes": "No") << endl;
    }

	return 0;
}
