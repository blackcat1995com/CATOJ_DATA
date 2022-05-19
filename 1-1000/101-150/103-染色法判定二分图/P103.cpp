#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 210, M = 2010;

int n, m;
int h[N], to[M], ne[M], idx = 0;

int color[N];

void add(int a, int b){
	to[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

bool dfs(int u, int c){
	color[u] = c;
  
  	for(int i = h[u]; ~i; i = ne[i]){
    	int j = to[i];
      	if(!color[j]){
        	if(!dfs(j, 3 - c)) return false;
        }
      	else if(color[j] == c) return false;
    }
  
  	return true;
}

int main() {
  
  	while(cin >> n, n){
    	cin >> m;
      	memset(h, -1, sizeof h);
      	memset(color, 0, sizeof color);
      
      	while(m--){
        	int a, b;
          	cin >> a >> b;
          	add(a, b), add(b, a);
        }
      
      	bool flag = true;
      
      	if(!dfs(0, 1)) flag = false;
      	
      	if(flag) puts("BICOLORABLE.");
      	else puts("NOT BICOLORABLE.");
    }

	return 0;
}

