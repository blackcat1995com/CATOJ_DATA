#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main() {

    int n, m;

    scanf("%d%d", &n, &m);

    priority_queue<int, vector<int>, greater<int> > heap;

    for(int i = 1; i <= m; i++) heap.push(0);

    while(n--){
        int x;
        scanf("%d", &x);
        int t = heap.top();
        heap.pop();
        heap.push(t + x);
    }

    for(int i = 1; i <= m - 1; i++) heap.pop();

    printf("%d\n", heap.top());

	return 0;
}
