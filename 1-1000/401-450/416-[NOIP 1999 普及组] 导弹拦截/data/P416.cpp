#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 1e5 + 10;

int n = 1, a[N], b[N], b2[N];
int len = 1, len2 = 1;

int main() {

    while(scanf("%d", &a[n]) == 1) n++;

    n--;

    b[1] = b2[1] = a[1];

    for(int i = 2; i <= n; i++){
        if(a[i] <= b[len]) b[++len] = a[i];
        else b[upper_bound(b+1, b+len+1, a[i], greater<int>()) - b] = a[i];

        if(a[i] > b2[len2]) b2[++len2] = a[i];
        else b2[lower_bound(b2+1, b2+len2+1, a[i]) - b2] = a[i];
    }

    printf("%d\n%d\n", len, len2);


	return 0;
}




