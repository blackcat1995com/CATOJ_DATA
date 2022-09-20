#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e4 + 10;

int n, m, V;
int p[N], v[N], w[N], f[N];

int find(int x){
	if(p[x] != x) p[x] = find(p[x]);
  	return p[x];
}

void merge(int a, int b){
	int pa = find(a), pb = find(b);
  	if(pa != pb){
    	p[pb] = pa;
      	v[pa] += v[pb];
      	w[pa] += w[pb];
    }
}

int main() {
  
  	cin >> n >> m >> V;
  	
  	for(int i = 1; i <= n; i++) p[i] = i;
  	
  	for(int i = 1; i <= n; i++) cin >> v[i] >> w[i];
  
  	while(m--){
    	int a, b;
      	cin >> a >> b;
      	merge(a, b);
    }
  
  	for(int i = 1; i <= n; i++){
    	if(p[i] != i) continue;
      	for(int j = V; j >= v[i]; j--)
          	f[j] = max(f[j], f[j - v[i]] + w[i]);
    }
	
  	cout << f[V] << endl;
	return 0;
}

