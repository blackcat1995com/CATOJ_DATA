#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 1e5 + 10, INF = 0x3f3f3f3f;

struct Range{
  int l, r;
  bool operator<(const Range &x) const{
      return r < x.r;
  }
}range[N];

int n;

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
	    int l, r;
	    scanf("%d%d", &l, &r);
	    range[i] = {l, r};
	}
	
	sort(range + 1, range + n + 1);
	
	int ans = 0, ed = -INF;
	
	for(int i = 1; i <= n; i++){
	    if(range[i].l > ed){
	        ans++;
	        ed = range[i].r;
	    }
	}
	
	printf("%d\n", ans);
	
	return 0;
}

