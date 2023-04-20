#include <iostream>
#include <queue>
using namespace std;

int n;
queue<int> q;
int main() {

	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	
	cin >> n;

	for (int i = 1; i <= n; i++)
		q.push(i);

	while (q.size() >= 2) {
		int t = q.front();
		cout << t << " ";
		q.pop();

		t = q.front();
		q.pop();
		q.push(t);
	}

	while (q.size()) {
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}

