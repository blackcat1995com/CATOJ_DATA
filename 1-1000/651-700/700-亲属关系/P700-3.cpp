#include <iostream>
#include <cstdio>
using namespace std;

const int N = 5010;

int n, m, k;
int p[N];
int rk[N];

int find(int x){
    int k, r;
    k = r = x;
    while(r != p[r]) r = p[r];
    
    while(k != r){
        int t = p[k];
        p[k] = r;
        k = t;
    }
    
    return r;
}

void init(){
    for(int i = 1; i <= n; i++) p[i] = i;
}

void merge(int a, int b){
    int pa = find(a), pb = find(b);
    if(pa == pb) return;
    
    if(rk[a] < rk[b]) p[pa] = pb;
    else if(rk[a] > rk[b]) p[pb] = pa;
    else{
		p[pa] = pb;
        rk[b]++;
    }
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
