#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 110;

int n;
int a[N], f[N];

int main() {
	
    int T;
    scanf("%d", &T);

    while(T--){
        memset(a, 0, sizeof(a));
        memset(f, 0, sizeof(f));

        scanf("%d", &n);
        for(int i = 1; i <= n; i++) scanf("%d", &a[i]);

        int ans = 0;
        for(int i = 1; i <= n; i++){
            f[i] = 1;
            for(int j = 1; j < i; j++)
                if(a[i] > a[j])
                    f[i] = max(f[i], f[j] + 1);
            ans = max(ans, f[i]);
        }


        for(int i = 1; i <= n; i++){
            f[i] = 1;
            for(int j = 1; j < i; j++)
                if(a[i] < a[j])
                    f[i] = max(f[i], f[j] + 1);
            ans = max(ans, f[i]);
        }

        printf("%d\n", ans);
    }
	
	return 0;
}




