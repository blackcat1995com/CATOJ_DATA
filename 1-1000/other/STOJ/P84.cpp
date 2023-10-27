#include<iostream>
using namespace std;
int main(){
	
    int n;
    cin >> n;
    
    for(int i = 2; i <= n / i; i++){
        if(n % i == 0){
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    
    return 0;
}