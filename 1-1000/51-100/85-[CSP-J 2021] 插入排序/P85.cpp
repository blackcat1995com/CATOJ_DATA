#include <iostream>
#include <cstdio>
using namespace std;

const int N = 8010;

int n, q;
int a[N], small[N], lequ[N];

int main() {
  
  	cin >> n >> q;
  
  	for(int i = 1; i <= n; i++) cin >> a[i];
  
  	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++){
        	if(a[i] == a[j] && j < i) lequ[i]++;
          	if(a[i] > a[j]) small[i]++;
        }
    }
  
  	while(q--){
    	int op, x, v, pre;
      	cin >> op;
      
      	if(op == 1){
        	cin >> x >> v;
          	pre = a[x], a[x] = v;
          	lequ[x] = small[x] = 0;
          	for(int i = 1; i <= n; i++){
            	if(a[i] == a[x] && i < x) lequ[x]++;
              	if(a[i] < a[x]) small[x]++;
              
              	if(a[i] == pre && i > x) lequ[i]--;
              	if(a[i] > pre && i != x) small[i]--;
              
              	if(a[i] == v && i > x) lequ[i]++;
              	if(a[i] > v) small[i]++;
            }
        }
      	else{
        	cin >> x;
          	cout << small[x] + lequ[x] + 1 << endl;
        }
    }

	return 0;
}

