#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e5 + 10;

int n;
int a[N];
int son[N * 31][2], idx = 0;

void insert(int x){
	int p = 0;
  	for(int i = 30; ~i; i--){
    	int& s = son[p][x >> i & 1];
      	if(!s) s = ++idx;
      	p = s;
    }
}

int query(int x){
	int p = 0, res = 0;
  	for(int i = 30; ~i; i--){
    	int t = x >> i & 1;
      	if(son[p][!t]){
          	res += 1 << i;
        	p = son[p][!t];     	
        }
      	else p = son[p][t];
    }
  	return res;
}

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	cin >> a[i];
      	insert(a[i]);
    }
  
  	int ans = 0;
  
  	for(int i = 1; i <= n; i++) ans = max(ans, query(a[i]));
  
  	cout << ans << endl;
	
	return 0;
}


