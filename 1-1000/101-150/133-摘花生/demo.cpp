#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;
int T;
int f[N][N];

int main() {
	
    scanf("%d", &T);

    while(T--){
        int r, c;
        scanf("%d%d", &r, &c);

        for(int i = 1; i <= r; i++){
            for(int j = 1; j <= c; j++){
                scanf("%d", &f[i][j]);
                f[i][j] += max(f[i-1][j], f[i][j-1]);
            }
        }
        printf("%d\n", f[r][c]);
    }
	return 0;
}



