#include <iostream>
using namespace std;

typedef long long LL;

int main(){
    
    int a, b;
    cin >> a >> b;
    
    if(a == 1){
        cout << 1 << endl;
        return 0;
    }
    
    LL res = 1;
    for(int i = 1; i <= b; i++){
        res *= a;
        if(res > 1e9){
            res = -1;
            break;
        }
    }
    
    cout << res << endl;
    
    return 0;
}