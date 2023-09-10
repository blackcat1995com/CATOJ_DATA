#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;

int main () {
    long long n, kk;
    int v[205];
    freopen("8.in", "r", stdin);
    freopen("8.out", "w", stdout);
    scanf ("%lld%lld", &n, &kk);
    for (long long i = 1; i <= n; ++i)
        scanf ("%d", &v[i]);
    for (long long i = n+1; i <= n+n; ++i)
        v[i] = v[n+n-i+1];
    printf ("%d\n", v[kk%(n+n) == 0 ? n+n : kk%(n+n)]);
    return 0;
}