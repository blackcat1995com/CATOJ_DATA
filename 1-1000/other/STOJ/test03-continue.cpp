#include <iostream>
using namespace std;

int main(){
    
    int i = 0;
    while(i < 10){
        i++;
        if(i == 6) continue;	
        cout << i << endl;
    }
    
    cout << "end" << endl;
    
    return 0;
}