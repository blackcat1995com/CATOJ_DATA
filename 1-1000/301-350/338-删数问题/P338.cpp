#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char s[310];
int k;

int main() {
	
    cin >> s >> k;
    int slen = strlen(s);

    while(k--){
        for(int i = 0; i <= slen - 2; i++){
            if(s[i + 1] < s[i]){
                for(int j = i; j <= slen - 2; j++)
                    s[j] = s[j + 1];
                slen--;
                break;
            }
            if(i == slen - 2)
                slen--;
        }
    }

    int st = 0;
    while(s[st] == '0' && st < slen - 1)
        st++;
    for(int i = st; i <= slen - 1; i++)
        cout << s[i];

	return 0;
}
