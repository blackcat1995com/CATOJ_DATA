#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 510, M = 1e5 + 10;

int n1, n2, m;
int h[N], to[M], ne[M], idx = 0;

bool book[N];
int match[N];
int ans = 0;

void add(int a, int b){
	to[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

bool find(int u){
	for(int i = h[u]; ~i; i = ne[i]){
    	int j = to[i];
      	if(!book[j]){
        	book[j] = true;
          	if(!match[j] || find(match[j])){
            	match[j] = u;
              	return true;
            }
        }
    }
  
  	return false;
}

int main() {
  
  	memset(h, -1, sizeof h);
  
  	cin >> n1 >> n2 >> m;
  
  	while(m--){
    	int a, b;
      	cin >> a >> b;
      	add(a, b);
    }
  
  	for(int i = 1; i <= n1; i++){
    	memset(book, 0, sizeof book);
      	if(find(i))
          	ans++;
    }
  
  	cout << ans << endl;

	return 0;
}

