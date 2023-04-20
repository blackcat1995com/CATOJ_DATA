#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    if(n % 123 >= 97 && n % 123 <= 122)
        cout << char(n % 123) << endl;
    else if(n % 91 >= 65 && n % 91 <= 90)
        cout << char(n % 91) << endl;
    else
        cout << "*" << endl;

	return 0;
}

