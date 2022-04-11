#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	int n, m;
	int x1, y1, x2, y2;
	cin >> n >> m >> x1 >> y1 >> x2 >> y2;

	int t1 = (x1 + y1 - 2) + (n + m - x2 - y2);
	int t2 = (x2 + y2 - 2) + (n + m - x1 - y1);

	cout << min(t1, t2) << endl;
	
	return 0;
}

