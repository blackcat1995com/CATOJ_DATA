#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    char road;
    cin >> road;  // 'A' 'B' 'C'
    
    switch(road){
        case 'A':
            cout << "你选择了A路" << endl;
            break;
       	case 'B':
            cout << "你选择了B路" << endl;
            break;
        case 'C':
            cout << "你选择了C路" << endl;
            break;
        default:
            cout << "请选择正确的路线" << endl;
    }

	return 0;
}