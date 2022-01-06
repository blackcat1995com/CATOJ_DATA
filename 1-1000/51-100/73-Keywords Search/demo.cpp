#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 1e4 + 10, S = 55, M = 1e6 + 10;

int n;
int son[N * S][26], cnt[N * S], idx = 0;
char str[M];
int q[N * S];
int ne[N * S];

void insert(const char * str){
	int p = 0;
  	for(int i = 0; str[i]; i++){
    	int u = str[i] - 'a';
      	if(!son[p][u]) son[p][u] = ++idx;
      	p = son[p][u];
    }
  	cnt[p]++;
}

void build(){
	int hh = 0, tt = -1;
  	for(int i = 0; i < 26; i++)
      	if(son[0][i]) q[++tt] = son[0][i];
  	
  	while(hh <= tt){
    	int t = q[hh++];
      	for(int i = 0; i < 26; i++){
        	int &p = son[t][i];
          	if(!p) p = son[ne[t]][i];
          	else{
            	ne[p] = son[ne[t]][i];
              	q[++tt] = p;
            }
        }
    }
}

int main() {
  
  	int T;
  	cin >> T;
  	while(T--){
    	memset(son, 0, sizeof son);
      	memset(cnt, 0, sizeof cnt);
      	memset(ne, 0, sizeof ne);
      	idx = 0;
      
      	cin >> n;
      	while(n--){
        	cin >> str;
          	insert(str);
        }
      
      	build();
      	
      	cin >> str;
      	int ans = 0;
      
      	for(int i = 0, j = 0; str[i]; i++){
        	int u = str[i] - 'a';
          	j = son[j][u];
          	
          	int p = j;
          	while(p){
            	ans += cnt[p];
              	cnt[p] = 0;
              	p = ne[p];
            }
        }
      	cout << ans << endl;
    }
	
	return 0;
}


