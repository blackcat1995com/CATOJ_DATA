#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

const int N = 1e6 + 7, INF = 0x3f3f3f3f;

struct Node{
	int key, a, b;
}data[N];

int h[N], a[1010];

int find(int x){
    int k = (x % N + N) % N;
    while(h[k] != INF && h[k] != x){
        k++;
        if(k == N) k = 0;
    }
    return k;
}

int main() {

	int n;

	while(scanf("%d", &n), n){

        memset(h, 0x3f, sizeof h);

        for(int i = 1; i <= n; i++) scanf("%d", &a[i]);

        for(int i = 1; i <= n; i++){
            for(int j = i + 1; j <= n; j++){
                Node node = {abs(a[i] + a[j]), i, j};
                int k = find(node.key);
                h[k] = node.key;
                data[k] = node;
            }
        }
      
        bool is_find = false;
        int maxv = -INF * 2;
        for(int i = 1; i <= n; i++){
            for(int j = i + 1; j <= n; j++){
                Node node = {abs(a[i] - a[j]), i, j};

                int k = find(node.key);
                if(h[k] == INF) continue;
                int c = data[k].a, d = data[k].b;
                if(c != i && c != j && d != i && d != j){
                    is_find = true;
                    if(a[i] == a[c] + a[d] + a[j]) maxv = max(maxv, a[i]);
                    if(a[j] == a[c] + a[d] + a[i]) maxv = max(maxv, a[j]);
                }

            }
        }

        if(is_find) printf("%d\n", maxv);
        else puts("No Solution");

	}

	return 0;
}
