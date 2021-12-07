#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 +  10;
int son[N][26], cnt[N], idx = 0;
char str[N];

void insert(const char* str){
	int p = 0;
	for(int i = 0; str[i]; i++){
		int u = str[i] - 'a';
		if(!son[p][u]) son[p][u] = ++idx;
		p = son[p][u];
	}
	cnt[p]++;
}

int query(const char* str, int &ans){
	int p = 0;
	for(int i = 0; str[i]; i++){
		int u = str[i] - 'a';
		if(!son[p][u]) return 0;
		p = son[p][u];
		ans += cnt[p];
	}
	return cnt[p];
}

int main() {

	int n, m;
	scanf("%d%d", &n, &m);

	while(n--){
		scanf("%s", str);
		insert(str);
	}

	while(m--){
		scanf("%s", str);
		int ans = 0;
		query(str, ans);
		printf("%d\n", ans);
	}
	
	return 0;
}


/*
4 3
a
ab
bc
abc
abc
efg
bc
*/
