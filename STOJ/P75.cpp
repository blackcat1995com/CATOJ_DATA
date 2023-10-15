#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    if(n < 0) {
        cout << "-";
        n *= -1;
    }
    
    bool is_ok = false;
    
    while(n){
        int x = n % 10;
        
        if(!is_ok && x)
            is_ok = true;
        
        if(is_ok)
        	cout << n % 10;
        n /= 10;
    }
   
    return 0;
}
