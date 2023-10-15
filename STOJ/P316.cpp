#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	int x, y;
    cin >> x >> y;
    
    cout << fixed << setprecision(4) << (x * 87 + y * 85) * 1.0 / (x + y) << endl;
    
	return 0;
}


