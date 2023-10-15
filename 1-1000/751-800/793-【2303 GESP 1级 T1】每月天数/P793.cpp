#include <iostream>
using namespace std;

int main(){
    
    int a, b;
    cin >> a >> b;
    
    if(b == 1) cout << 31 << endl;
    else if(b == 2){
        if(a % 4 == 0 && a % 100 || a % 400 == 0)
            cout << 29 << endl;
        else 
            cout << 28 << endl;
    }
    else if(b == 3) cout << 31 << endl;
    else if(b == 4) cout << 30 << endl;
    else if(b == 5) cout << 31 << endl;
    else if(b == 6) cout << 30 << endl;
    else if(b == 7) cout << 31 << endl;
    else if(b == 8) cout << 31 << endl;
    else if(b == 9) cout << 30 << endl;
    else if(b == 10) cout << 31 << endl;
    else if(b == 11) cout << 30 << endl;
    else if(b == 12) cout << 31 << endl;
    
    return 0;
}
