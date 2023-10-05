#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	int i = 1;
    while(i <= 100){
        if(i & 1)
            cout << i << endl;
        i++;
    }
    
    
	return 0;
}