#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    string s;
    int a[26] = {};
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        a[s[i] - 'a']++;
    }

    for (int i = 0; i < s.length(); i++){
        if (a[s[i] - 'a'] == 1){
            printf("%c\n", s[i]);
            return 0;
        }
    }
    printf("no\n");
    return 0;
}
