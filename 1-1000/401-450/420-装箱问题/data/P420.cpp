#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    int s1, s2, s3, s4, s5, s6;
    int a[4] = {0, 5, 3, 1};
    while(cin >>s1>>s2>>s3>>s4>>s5>>s6, s1||s2||s3||s4||s5||s6){
        int n = s6+s5+s4+(s3+3)/4;
        int n2 = 5*s4 + a[s3%4];
        if(s2 > n2) n += (s2-n2+8)/9;
        int n1 = 36*n-36*s6-25*s5-16*s4-9*s3-4*s2;
        if(s1 > n1) n += (s1-n1+35)/36;
        printf("%d\n", n);
    }

	return 0;
}
