#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	int h, r;
    cin >> h >> r;
    double V = 3.14 * r * r * h;
    cout << ceil(20000 / V) << endl;
    
	return 0;
}


