#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 1010;

int n;
int a[N], f[N];
int ans = 0;

int main() {
	
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]); 
        f[i] = a[i];
    }

    ans = a[1];

    for(int i = 2; i <= n; i++){
        for(int j = 1; j < i; j++){
            if(a[j] < a[i])
                f[i] = max(f[i], f[j] + a[i]);
        }
        ans = max(ans, f[i]);
    }

    printf("%d\n", ans);

	return 0;
}




