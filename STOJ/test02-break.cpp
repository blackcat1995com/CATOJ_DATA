#include <iostream>
using namespace std;

int main(){
    
    int i = 1;
    while(i <= 10){
        cout << i << endl;
        if(i == 6) break;	// 跳出本层循环
        i++;
    }
    
    cout << "end" << endl;
    
    return 0;
}
