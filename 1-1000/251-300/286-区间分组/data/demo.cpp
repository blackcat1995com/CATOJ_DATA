#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

const int N = 1e5 + 10;

int n;

struct Range{
  int l, r;
  bool operator< (const Range &x) const{
      return l < x.l;
  }
}range[N];

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) scanf("%d%d", &range[i].l, &range[i].r);
    
    sort(range + 1, range + n + 1);
    
    priority_queue<int, vector<int>, greater<int> > heap;
    
    for(int i = 1; i <= n; i++){
        auto t = range[i];
        if(heap.empty() || heap.top() >= t.l) heap.push(t.r);
        else{
            heap.pop();
            heap.push(t.r);
        }
    }
    
    printf("%d\n", heap.size());
	
	return 0;
}

