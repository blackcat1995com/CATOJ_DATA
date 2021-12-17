#include <iostream>
#include <cstdio>

using namespace std;

int heap_size = 0;
int heap[30001];
int n;
int ans = 0;

void put(int k);
int get();
int main() {
	
	cin >> n;
	for (int i = 1; i <= n; i++) {	// ½¨¶Ñ
		int t;
		cin >> t;
		put(t);
	}

	for (int i = 1; i <= n-1; i++) {
		int x = get();
		int y = get();
		ans += x + y;
		put(x + y);
	}

	cout << ans << endl;
	return 0;
}

void put(int k) {
	heap[++heap_size] = k;
	int cur = heap_size;
	while (cur > 1) {
		int next = cur / 2;
		if (heap[cur] >= heap[next])
			return;
		swap(heap[cur], heap[next]);
		cur = next;
	}
}

int get() {
	int ret = heap[1];
	heap[1] = heap[heap_size--];
	int cur = 1;

	while (cur * 2 <= heap_size) {
		int next = cur * 2;
		if (next + 1 <= heap_size && heap[next + 1] < heap[next])
			next++;
		if (heap[cur] <= heap[next])
			return ret;
		swap(heap[cur], heap[next]);
		cur = next;
	}
	return ret;
}

/*
3
1 2 9

15
*/
