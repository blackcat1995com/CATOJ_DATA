#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 + 10;

int n, m;
int a[N], s[N];

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    scanf("%d%d", &n, &m);

    for(int i = 1; i <= n; i++)
        scanf("%d", &a[i]), s[i] = s[i-1] + a[i];

    while(m--){
        int l, r;
        scanf("%d%d", &l, &r);
        printf("%d\n", s[r] - s[l-1]);
    }
    
	fclose(stdin);
	fclose(stdout);
	return 0;
}
