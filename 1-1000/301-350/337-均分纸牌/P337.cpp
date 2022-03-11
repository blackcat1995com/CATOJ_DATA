#include <iostream>
#include <cstdio>
using namespace std;

int n;
int a[110];
int ans = 0;

int main() {

    scanf("%d", &n);

    int sum = 0;
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }

    int ave = sum / n;

    for(int i = 1; i <= n - 1; i++){
        if(a[i] == ave) continue;
        int t = ave - a[i];
        a[i + 1] -= t;
        ans++;
    }

    printf("%d\n", ans);
	
	return 0;
}
