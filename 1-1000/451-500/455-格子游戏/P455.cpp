#include <iostream>
#include <cstdio>
using namespace std;

const int N = 40010;

int n, m;
int p[N];

int get(int x, int y){
	return x * n + y;
}

int find(int x){
	if(p[x] != x) p[x] = find(p[x]);
  	return p[x];
}

int main() {
  
  	cin >> n >> m;
  	for(int i = 0; i < n * n; i++) p[i] = i;
  
  	int res = 0;
  	
  	for(int i = 1; i <= m; i++){
    	int x, y;
      	char d;
      	cin >> x >> y >> d;
      	x--, y--;
      	int a, b;
      	a = get(x, y);
      	if(d == 'D') b = get(x + 1, y);
      	else b = get(x, y + 1);
      
      	int pa = find(a), pb = find(b);
      
      	if(pa == pb){
        	res = i;
          	break;
        }
      	p[pa] = pb;
    }
  
  	if(!res) puts("draw");
  	else cout << res << endl;

	return 0;
}

