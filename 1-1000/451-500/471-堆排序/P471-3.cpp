#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e5 + 10;

int n;
int h[N], cnt = 0;

void down(int u){
	int t = u;
  	if(u * 2 <= cnt && h[u * 2] > h[t]) t = u * 2;
  	if(u * 2 + 1 <= cnt && h[u * 2 + 1] > h[t]) t = u * 2 + 1;
  	if(u != t){
    	swap(h[u], h[t]);
      	down(t);
    }
}

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> h[i];
  	cnt = n;
  	for(int i = n / 2; i; i--) down(i);
  
  	for(int i = n; i > 1; i--){
    	swap(h[1], h[i]);
      	cnt--;
      	down(1);
    }
  
  	for(int i = 1; i <= n; i++) cout << h[i] << " ";

	return 0;
}

