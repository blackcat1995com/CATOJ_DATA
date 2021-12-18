#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 1010;
char a[N], b[N], t1[N], t2[N];
int f[N][N];
int main() {
	
    scanf("%s%s", t1, t2);
    int len1 = strlen(t1), len2 = strlen(t2);

    for(int i = 0; i < len1; i++) a[i+1] = t1[i];
    for(int i = 0; i < len2; i++) b[i+1] = t2[i];

    for(int i = 1; i <= len1; i++){
        for(int j = 1; j <= len2; j++){
            f[i][j] = max(f[i-1][j], f[i][j-1]);
            if(a[i] == b[j])
                f[i][j] = max(f[i][j], f[i-1][j-1] + 1);
        }
    }

    printf("%d\n", f[len1][len2]);

	return 0;
}




