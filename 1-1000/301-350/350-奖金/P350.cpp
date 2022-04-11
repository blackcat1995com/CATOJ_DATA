#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 1e4 + 10, M = 2e4 + 10;

int n, m;
int h[N], to[M], ne[M], idx = 0;
int q[N], du[N];
int dis[N];
int ans = 0;

void add(int a, int b){
	to[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

bool toposort(){
	int hh = 0, tt = -1;
  	for(int i = 1; i <= n; i++)
      	if(!du[i]) q[++tt] = i;
  
  	while(hh <= tt){
    	int t = q[hh++];
      	for(int i = h[t]; ~i; i = ne[i]){
        	int j = to[i];
          	if(--du[j] == 0) q[++tt] = j;
        }
    }
  
  	return tt == n - 1;
}

int main() {
  
  	cin >> n >> m;
  	memset(h, -1, sizeof h);
  
  	while(m--){
    	int a, b;
      	cin >> a >> b;
      	add(b, a);
      	du[a]++;
    }
  
  	if(!toposort()){
    	puts("Poor Xed");
      	return 0;
    }
  
  	for(int i = 1; i <= n; i++) dis[i] = 100;
  	
  	for(int i = 0; i < n; i++){
    	int j = q[i];
      	for(int k = h[j]; ~k; k = ne[k]){
        	dis[to[k]] = max(dis[to[k]], dis[j] + 1);
        }
    }
  
  	
  	for(int i = 1; i <= n; i++) ans += dis[i];
  
  	cout << ans << endl;
	
	return 0;
}


