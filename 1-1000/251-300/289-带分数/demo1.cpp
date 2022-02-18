#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

typedef long long LL;
const int N = 10;

int n;
bool book[N], bookbak[N];
int ans = 0;

bool check(int a, int c){
	LL b = n * (LL)c - a * c;
  	if(!a || !b || !c) return false;
  	memcpy(bookbak, book, sizeof book);
  	
  	while(b){
    	int x = b % 10;
      	b /= 10;
      	if(!x || bookbak[x]) return false;
      	bookbak[x] = true;
    }
  
  	for(int i = 1; i <= 9; i++)
      	if(!bookbak[i])
          	return false;
  	
  	return true;
}

void dfs_c(int u, int a, int c){
	if(u > 9) return;
  	if(check(a, c)) ans++;
  
  	for(int i = 1; i <= 9; i++)
      	if(!book[i]){
        	book[i] = true;
          	dfs_c(u + 1, a, c * 10 + i);
          	book[i] = false;
        }
}

// u代表已经用了几个数字，a代表当前a的值
void dfs_a(int u, int a){
	if(a >= n) return;
  	if(a) dfs_c(u, a, 0);
  	
  	for(int i = 1; i <= 9; i++)
      	if(!book[i]){
        	book[i] = true;
          	dfs_a(u + 1, a * 10 + i);
          	book[i] = false;
        }
}

int main() {
  
  	cin >> n;
  
  	dfs_a(0, 0);
  
  	cout << ans << endl;
	
	return 0;
}


