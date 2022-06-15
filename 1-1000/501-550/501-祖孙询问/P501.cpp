#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 8e4 + 10;

int n, m;
int h[N], to[N], ne[N], idx = 0;
int d[N], f[N][16];
int q[N], hh = 0, tt = -1;
int root = -1;

void add(int a, int b){
	to[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void bfs(int root){
	memset(d, 0x3f, sizeof d);
  	
  	d[0] = 0, d[root] = 1;
  	q[++tt] = root;
  
  	while(hh <= tt){
    	int t = q[hh++];
      	for(int i = h[t]; ~i; i = ne[i]){
        	int j = to[i];
          	if(d[j] > d[t] + 1){
            	d[j] = d[t] + 1;
              	q[++tt] = j;
              	f[j][0] = t;
              	for(int k = 1; k <= 15; k++) f[j][k] = f[f[j][k - 1]][k - 1];
            }
        }
    }
}

int lca(int a, int b){
	if(d[a] < d[b]) return lca(b, a);
  	for(int k = 15; k >= 0; k--){
    	if(d[f[a][k]] >= d[b])
          	a = f[a][k];
    }
  
  	if(a == b) return a;
  
  	for(int k = 15; k >= 0; k--){
    	if(f[a][k] != f[b][k]){
        	a = f[a][k];
          	b = f[b][k];
        }
    }
  
  	return f[a][0];
}

int main() {
  
  	cin >> n;
  	memset(h, -1, sizeof h);
  	for(int i = 1; i <= n; i++){
    	int a, b;
      	cin >> a >> b;
      	if(b == -1) root = a;
      	else add(a, b), add(b, a);
    }
  
  	bfs(root);
  
  	cin >> m;
  	while(m--){
    	int a, b;
      	cin >> a >> b;
      	int p = lca(a, b);
      	if(p == a) puts("1");
      	else if(p == b) puts("2");
      	else puts("0");
    }

	return 0;
}
