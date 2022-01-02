#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 + 10;

int n, m;
int son[N][26], cnt[N], idx = 0;
char str[N];

void insert(const char* str){
	int p = 0;
  	for(int i = 0; str[i]; i++){
    	int u = str[i] - 'a';
      	if(!son[p][u]) son[p][u] = ++idx;
      	p = son[p][u];
    }
  	cnt[p]++;
}

int query(const char* str){
	int p = 0;
  	int res = 0;
  	for(int i = 0; str[i]; i++){
    	int u = str[i] - 'a';
      	if(!son[p][u]) return res;
      	p = son[p][u];
      	res += cnt[p];
    }
  
  	return res;
}

int main() {
  
  	cin >> n >> m;
  	while(n--){
    	cin >> str;
      	insert(str);
    }
  
  	while(m--){
    	cin >> str;
      	cout << query(str) << endl;
    }
	
	return 0;
}


