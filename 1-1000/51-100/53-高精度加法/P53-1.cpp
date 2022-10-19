#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 210;

char s1[N], s2[N];
int a[N], b[N], c[N];

int main() {

    cin >> s1 + 1 >> s2 + 1;

    a[0] = strlen(s1 + 1);
    b[0] = strlen(s2 + 1);
    c[0] = max(a[0], b[0]);

    for(int i = 1; i <= a[0]; i++) a[i] = s1[a[0] + 1 - i] - '0';
    for(int i = 1; i <= b[0]; i++) b[i] = s2[b[0] + 1 - i] - '0';

    int k = 0;
    for(int i = 1; i <= c[0]; i++){
        int t = a[i] + b[i] + k;
            k = t / 10;
            c[i] = t % 10;
    }

    if(k) c[++c[0]] = 1;
    
    /*
        0012
        0034

        0046

        01234
        06400  c[0] = 4

        0 + 0 = 0

    */
    while(!c[c[0]] && c[0] > 1) c[0]--;

    for(int i = c[0]; i >= 1; i--) cout << c[i];
	
	return 0;
}
