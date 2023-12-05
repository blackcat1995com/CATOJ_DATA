#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double z = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	
	cout << fixed << setprecision(3) << z << endl;
	
	return 0;
}
