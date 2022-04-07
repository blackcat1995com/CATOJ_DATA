#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int a[210][3];

int ans = 1;
int is = 0, ie = 0;
int stk[210], top = 0;
int main() {
	
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i][0]);
        a[i][1] = 1;
    }

    for(int i = 2; i <= n; i++){
        int maxlen = 0, idx = 0;
        for(int j = 1; j < i; j++){
            if(a[j][0] <= a[i][0] && a[j][1] > maxlen){
                maxlen = a[j][1];
                idx = j;
            }
        }

        if(maxlen){
            a[i][1] = maxlen + 1;
            a[i][2] = idx;
            if(a[i][1] > ans){
                ans = a[i][1];
                ie = i;
            }
        }
    }

    printf("max=%d\n", ans);

    if(!ie){
        cout << a[1][0] << endl;
        return 0;
    }

    while(ie){
        stk[++top] = a[ie][0];
        ie = a[ie][2];
    }

    while(top)
        printf("%d ", stk[top--]);
    
	return 0;
}




