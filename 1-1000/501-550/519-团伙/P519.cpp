#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010;

int n, m;
int p[N], e[N];
int res = 0;

int find(int x){
	if(p[x] != x) p[x] = find(p[x]);
  	return p[x];
}

void merge(int x, int y){
	if(find(x) != find(y)) p[find(x)] = y;
}

int main() {
  
  	cin >> n >> m;
  	for(int i = 1; i <= n; i++) p[i] = i;
  
  	while(m--){
    	int k, x, y;
      	cin >> k >> x >> y;
      	if(!k) merge(x, y);
      	else{
        	if(!e[x]) e[x] = y;
          	if(!e[y]) e[y] = x;
          	merge(p[y], e[x]);
          	merge(p[x], e[y]);
        }
    }
  
  	for(int i = 1; i <= n; i++)
      	if(p[i] == i)
          	res++;
  
  	cout << res << endl;
	
	return 0;
}

