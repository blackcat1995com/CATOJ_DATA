#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	int n;
    cin >> n;
    
    int cnt = 0;
    
    int i = 1;
    while(i <= n){
        if(i % 10 == 6 && i % 8 == 0)
            cnt++;
        i++;
    }
    
    cout << cnt << endl;
	return 0;
}


