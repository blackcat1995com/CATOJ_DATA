#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 + 10;

int n;
int son[N][26], cnt[N], idx = 0;
int q[N], ne[N];
char str[N];
int id[210];

void insert(const char * str, int k){
	int p = 0;
  	for(int i = 0; str[i]; i++){
    	int u = str[i] - 'a';
      	if(!son[p][u]) son[p][u] = ++idx;
      	p = son[p][u];
      	cnt[p]++;
    }
  	id[k] = p;
}

void build(){
	int hh = 0, tt = -1;
  	for(int i = 0; i < 26; i++)
      	if(son[0][i]) q[++tt] = son[0][i];
  
  	while(hh <= tt){
    	int t = q[hh++];
      	for(int i = 0; i < 26; i++){
        	int& p = son[t][i];
          	if(!p) p = son[ne[t]][i];
          	else{
            	ne[p] = son[ne[t]][i];
              	q[++tt] = p;
            }
        }
    }
}

int main() {
  
  	cin >> n;
  	for(int i = 0; i < n; i++){
      	cin >> str;
    	insert(str, i);
    }
  
  	build();
  
  	for(int i = idx - 1; i >= 0; i--) cnt[ne[q[i]]] += cnt[q[i]];
  
  	for(int i = 0; i < n; i++) cout << cnt[id[i]] << endl;

	return 0;
}

