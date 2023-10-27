#include <iostream>
using namespace std;

int main(){
    
    int m, n;
    cin >> m >> n;
    int sum = 0;
    while(n--){
        int x;
        cin >> x;
        sum += x;
    }
    
    cout << (sum >= m ? "Yes" : "No") << endl;
    
    return 0;
}