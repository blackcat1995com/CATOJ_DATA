#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010;

int n;
int a[N], b[N], len = 1;

int idx(int x, int len);
int main() {

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)  scanf("%d", &a[i]);

    b[1] = a[1];

    for(int i = 2; i <= n; i++){
        if(a[i] > b[len])
            b[++len] = a[i];
        else{
            int p = idx(a[i], len);
            if(a[p] != a[i]) b[p+1] = a[i];
        }
    }

    printf("%d\n", len);

	return 0;
}


int idx(int x, int len){
    int l = 0, r = len;
    while(l < r){
        int mid = l + r + 1 >> 1;
        if(b[mid] < x)  l = mid;
        else r = mid - 1;
    }
    return l;
}


