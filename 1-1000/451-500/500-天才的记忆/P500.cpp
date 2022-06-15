#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

const int N = 2e5 + 10, M = 20;

int n, m;
int a[N];
int f[N][M];

void init(){
	for(int j = 0; j < M; j++){
    	for(int i = 1; i + (1 << j) - 1 <= n; i++)
          	if(!j) f[i][j] = a[i];
      		else f[i][j] = max(f[i][j - 1], f[i + (1 << j - 1)][j - 1]);
    }
}

int query(int L, int R){
	int len = R - L + 1;
  	int k = log(len) / log(2);
  	return max(f[L][k], f[R - (1 << k) + 1][k]);
}

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  
  	init();
  
  	cin >> m;
  
  	while(m--){
    	int L, R;
      	cin >> L >> R;
      	cout << query(L, R) << endl;
    }

	return 0;
}

