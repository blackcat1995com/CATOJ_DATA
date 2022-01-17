#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

const int N = 1e6 + 7, INF = 0x3f3f3f3f;

struct Node{
	int key, a, b;
}data[N];

int h[N], w[1010];

int find(int x){
	int k = (x % N + N) % N;
  	while(h[k] != INF && h[k] != x){
    	k++;
      	if(k == N) k = 0;
    }
  	return k;
}

int main() {
  
  	int n;
  	while(cin >> n, n){
    	memset(h, 0x3f, sizeof h);
      	for(int i = 1; i <= n; i++) cin >> w[i];
      	
      	for(int i = 1; i <= n; i++){
        	for(int j = i + 1; j <= n; j++){
            	Node node = {abs(w[i] + w[j]), i, j};
              	int k = find(node.key);
              	h[k] = node.key;
              	data[k] = node;
            }
        }
      
      	bool is_find = false;
      
      	int maxv = -INF * 2;
      	for(int i = 1; i <= n; i++){
        	for(int j = i + 1; j <= n; j++){
            	Node node = {abs(w[i] - w[j]), i, j};
              	int k = find(node.key);
              	if(h[k] == INF) continue;
              	int a = data[k].a, b = data[k].b;
              	if(a != i && a != j && b != i && b != j){
                	is_find = true;
                  	if(w[i] == w[a] + w[b] + w[j]) maxv = max(maxv, w[i]);
                  	if(w[j] == w[a] + w[b] + w[i]) maxv = max(maxv, w[j]);
                }
            }
        }
      
      	if(is_find) cout << maxv << endl;
      	else puts("No Solution");
    }
	
	return 0;
}


