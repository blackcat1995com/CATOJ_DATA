#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    double h, sum = 0;
    
    cin >> h;
    
    int i = 1;
    while(i <= 10){
        h /= 2;
        sum += 3 * h;
        i++;
    }
    
    // cout << h << " " << sum << endl;
    cout << sum - h << endl << h << endl;
	return 0;
}