#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int n;
set<int> s[2];

int main() {
    
    freopen("10.in", "r", stdin);
    freopen("10.out", "w", stdout);

    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int x;
        scanf("%d", &x);
        s[x].insert(i);
    }

    while(true){
        if(s[0].empty()){
            for(int i : s[1])
                printf("%d\n", i);
            return 0;
        }
        if(s[1].empty()){
            for(int i : s[0])
                printf("%d\n", i);
            return 0;
        }
        
        int last = 0;
        int t = *s[1].begin() < *s[0].begin();
        while(true){
            set<int>::iterator it = s[t].upper_bound(last);
            if(it == s[t].end()) break;
            printf("%d ", *it);
            last = *it;
            s[t].erase(it);
            t = 1 - t;
        }
        puts("");
    }
    
    fclose(stdin);
    fclose(stdout);
    
	return 0;
}


