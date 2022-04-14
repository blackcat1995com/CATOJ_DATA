#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 + 10;

int n, k;
int a[N], q[N];
int hh = 0, tt = -1;

int main() {
  
  	cin >> n >> k;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  	
  	for(int i = 1; i <= n; i++){
    	if(hh <= tt && i - k + 1 > q[hh]) hh++;
      	while(hh <= tt && a[q[tt]] >= a[i]) tt--;
      	q[++tt] = i;
      	if(i >= k) cout << a[q[hh]] << " ";
    }
  
  	puts("");
  
  	hh = 0, tt = -1;
  	
	for(int i = 1; i <= n; i++){
    	if(hh <= tt && i - k + 1 > q[hh]) hh++;
      	while(hh <= tt && a[q[tt]] <= a[i]) tt--;
      	q[++tt] = i;
      	if(i >= k) cout << a[q[hh]] << " ";
    }
  
	return 0;
}


