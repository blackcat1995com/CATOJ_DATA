#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e5 + 10, M = 31 * N;

int n;
int son[M][2], idx = 0;
int a[N];

void insert(int x){
	int p = 0;
	for(int i = 30; ~i; i--){
		int &s = son[p][x >> i & 1];
		if(!s) s = ++idx;
		p = s;
	}
}

int query(int x){
	int res = 0, p = 0;
	for(int i = 30; i >= 0; i--){
		int s = x >> i & 1;
		if(son[p][!s]){
			res += 1 << i;
			p = son[p][!s];
		}
		else p = son[p][s];
	}
	return res;
}

int main() {

	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		insert(a[i]);
	}

	int ans = 0;
	for(int i = 1; i <= n; i++) ans = max(ans, query(a[i]));

	printf("%d\n", ans);
	
	return 0;
}

