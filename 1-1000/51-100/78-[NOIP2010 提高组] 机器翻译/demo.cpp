#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

const int N = 1010;

int n, m;
bool h[N];
queue<int> q;
int ans = 0;

int main() {

	scanf("%d%d", &m, &n);

	while(n--){
		int x;
		scanf("%d", &x);
		if(!h[x]){
			if(q.size() == m){
				int t = q.front();
				h[t] = false;
				q.pop();
			}
			q.push(x);
			h[x] = true;
			ans++;
		}
	}

	printf("%d\n", ans);
	
	return 0;
}

