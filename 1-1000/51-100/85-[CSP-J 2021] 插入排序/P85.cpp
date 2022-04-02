#include <iostream>
#include <cstdio>
using namespace std;

const int N = 8010;

int n, q;
int a[N], small[N], lequal[N];

int main() {

	cin >> n >> q;
	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i] == a[j] && j < i) lequal[i]++;
			if(a[i] > a[j]) small[i]++;
		}
	}

	while(q--){
		int op, x, v, pre;
		scanf("%d", &op);
		if(op == 1){
			scanf("%d%d", &x, &v);
			pre = a[x], a[x] = v;
			lequal[x] = small[x] = 0;
			for(int i = 1; i <= n; i++){
				if(a[i] == a[x] && i < x) lequal[x]++;
				if(a[i] < a[x]) small[x]++;

				if(a[i] == pre && i > x) lequal[i]--;
				if(a[i] > pre && i != x) small[i]--;

				if(a[i] == v && i > x) lequal[i]++;
				if(a[i] > v) small[i]++;
			}
		}
		else{
			scanf("%d", &x);
			printf("%d\n", small[x] + lequal[x] + 1);
		}
	}
	
	return 0;
}


