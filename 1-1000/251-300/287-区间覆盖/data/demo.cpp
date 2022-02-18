#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 1e5 + 10, INF = 0x3f3f3f3f;

int n;

struct Range{
    int l, r;
    bool operator<(const Range &x) const{
        return l < x.l;
    }
}range[N];

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    
    int st, ed;
    scanf("%d%d%d", &st, &ed, &n);
    
    for(int i = 1; i <= n; i++){
        int l, r;
        scanf("%d%d", &l, &r);
        range[i] = {l, r};
    }
    
    sort(range + 1, range + n + 1);
    
    int ans = 0;
    bool success = false;
    
    for(int i = 1; i <= n; i++){
        int j = i, r = -INF;
        while(j <= n && range[j].l <= st){
            r = max(r, range[j].r);
            j++;
        }
        
        if(r < st){
            ans = -1;
            break;
        }
        
        ans++;
        
        if(r >= ed){
            success = true;
            break;
        }
        
        st = r;
        i = j - 1;
    }
    
    if(!success) ans = -1;
    printf("%d\n", ans);
    
	return 0;
}

/*
0 5
5
0 2
0 1
1 3
2 4
3 5

3
*/

/*
1 5
3
-1 3
2 4
3 5

2
*/

