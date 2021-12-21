#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

const int N = 3e4 + 10;

int T, n;

struct Node{
	int L, R, dat;
}tr[N * 4];

void pushup(int u){
	tr[u].dat = tr[u << 1].dat + tr[u << 1 | 1].dat;
}

void build(int u, int L, int R){
	tr[u] = {L, R};
  	if(L == R) return;
  
  	int mid = tr[u].L + tr[u].R >> 1;
  
  	build(u << 1, L, mid), build(u << 1 | 1, mid + 1, R);
}

void update(int u, int x, int dat){
	if(tr[u].L == x && tr[u].R == x){
    	tr[u].dat += dat;
      	return;
    }
  
  	int mid = tr[u].L + tr[u].R >> 1;
  
  	if(x <= mid) update(u << 1, x, dat);
  	else update(u << 1 | 1, x, dat);
  
  	pushup(u);
}

int query(int u, int L, int R){
	if(tr[u].L >= L && tr[u].R <= R) return tr[u].dat;
  
  	int mid = tr[u].L + tr[u].R >> 1;
  
  	int res = 0;
  	if(L <= mid) res = query(u << 1, L, R);
  	if(R > mid) res += query(u << 1 | 1, L, R);
  
  	return res;
}

int main() {
  
  	cin >> T;
  
  	int idx = 0;
  
  	while(T--){
    	cin >> n;
      	build(1, 1, n);
      
      	for(int i = 1; i <= n; i++){
        	int t;
          	cin >> t;
          	update(1, i, t);
        }
      
      	printf("Case %d:\n", ++idx);
      
      	string op;
      	while(cin >> op, op != "End"){
        	int a, b;
          	cin >> a >> b;
          	if(op == "Add") update(1, a, b);
          	else if(op == "Sub") update(1, a, -b);
          	else cout << query(1, a, b) << endl;	
        }
    }
	
	return 0;
}
