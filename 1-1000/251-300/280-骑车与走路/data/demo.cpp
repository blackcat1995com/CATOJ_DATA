#include <iostream>
using namespace std;

int main() {
	
	freopen("5.in", "r", stdin);
	freopen("5.out", "w", stdout);
	int dis, bike, walk;
	cin >> dis;
	bike = 27 + 23 + dis / 3;
	walk = dis / 1.2;
	if (bike < walk)
		cout << "Bike";
	else if (bike > walk)
		cout << "Walk";
	else
		cout << "All";
	return 0;
}
