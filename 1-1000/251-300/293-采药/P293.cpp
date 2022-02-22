#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int t, m;

int f[1001];

int main() {
	
    scanf("%d%d", &t, &m);

    for(int i = 1; i <= m; i++){
        int w, v;
        scanf("%d%d", &w, &v);
        for(int j = t; j >= w; j--)
            f[j] = max(f[j], v + f[j - w]);
    }

    printf("%d\n", f[t]);

	return 0;
}



