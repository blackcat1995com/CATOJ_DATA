#include<iostream>
using namespace std;
int main(){
	
    int m, n;
    cin >> m >> n;
    
    for(int i = min(m, n); i >= 1; i--){
        if(m % i == 0 && n % i == 0){
            cout << i << endl;
            break;
        }          
    }
    
    return 0;
}