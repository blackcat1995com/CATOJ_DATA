#include <iostream>
#include <cstdio>
#define lowbit(x) x & - x
using namespace std;

const int N = 32010;

int n;
int tr[N], level[N];

void update(int x, int t){
	while(x <= N){
    	tr[x] += t;
      	x += lowbit(x);
    }
}

int sum(int x){
	int res = 0;
  	while(x){
    	res += tr[x];
      	x -= lowbit(x);
    }
  	return res;
}

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	int x, y;
      	cin >> x >> y;
      	x++;
      	level[sum(x)]++;
      	update(x, 1);
    }
  
  	for(int i = 0; i < n; i++) cout << level[i] << endl;

	return 0;
}

