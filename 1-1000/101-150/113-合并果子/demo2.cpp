#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int n;
int ans = 0;
priority_queue<int, vector<int>, greater<int> > heap;

int main() {
	
	cin >> n;
	for (int i = 1; i <= n; i++) {	// ½¨¶Ñ
		int t;
		cin >> t;
		heap.push(t);
	}

	for (int i = 1; i <= n-1; i++) {
		int x = heap.top();
		heap.pop();
		int y = heap.top();
		heap.pop();
		ans += x + y;
		heap.push(x + y);
	}

	cout << ans << endl;
	return 0;
}



/*
3
1 2 9

15
*/
