#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

#define fish first
#define lake second
const int INF = 0x3f3f3f3f;
const int N = 101;

int t[N], f[N], d[N];	
int n, T;
int main() {
	cin >> n;	// 5
	for (int i = 1; i <= n; i++)
		cin >> f[i];		// 10 14 20 16 9
	for (int i = 1; i <= n; i++)
		cin >> d[i];		// 2 4 6 5 3
	for (int i = 1; i <= n - 1; i++)
		cin >> t[i];		// 3 5 4 4

	cin >> T;	// 14

	int ans = -INF, walk_time = 0;

	for (int k = 1; k <= n; k++) {
		priority_queue<pair<int, int> > heap;
		int rest_time = T - walk_time;
		int temp_max = 0;
		for (int i = 1; i <= k; i++)
			heap.push(make_pair(f[i], i));
		while (rest_time > 0 && heap.top().fish > 0) {
			pair<int, int> temp_pair = heap.top();
			heap.pop();
			temp_max += temp_pair.fish;
			temp_pair.fish -= d[temp_pair.lake];
			heap.push(temp_pair);
			rest_time--;
		}
		if (temp_max > ans)
			ans = temp_max;
	
		walk_time += t[k];
	}
	cout << ans << endl;

	return 0;
}

/*
5
10 14 20 16 9
2 4 6 5 3
3 5 4 4
14
*/