#include <iostream>
#include <cstdio>
using namespace std;

int lowbit(int x){
    return x & -x;
}

int calc(int x){
    int ret = 0;
    while(x) x -= lowbit(x), ret++;
    return ret;
}

int find(int x){
    int y = x + 1;
    while(calc(y++) != calc(x));
    return y - 1;
}

int main() {
	
    int x;

    while(scanf("%d", &x) == 1, x)
        printf("%d\n", find(x));
	
	return 0;
}
