#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double sum = 6 * 9.6;
    double a = sum - 9.4 * 5;
    double b = sum - 9.8 * 5;
    double res = (sum - a - b) / 4;
    cout << fixed << setprecision(2) << res << endl;
    
	return 0;
}