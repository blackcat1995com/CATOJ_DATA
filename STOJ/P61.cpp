#include <iostream>
using namespace std;

int main(){
    
    long long n;
    cin >> n;
    
    if(n < 100 && n % 2 == 1)
        cout << n << " is an odd number less than 100." << endl;
    else if(n >= 100)
        cout << "This is a number greater than or equal to 100." << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}