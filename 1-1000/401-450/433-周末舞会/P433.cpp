#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int a, b, k;
queue<int> q1, q2;

int main() {

	cin >> a >> b >> k;
    for(int i = 1; i <= a; i++) q1.push(i);
    for(int i = 1; i <= b; i++) q2.push(i);
    
    while(k--){
    	int t1 = q1.front(), t2 = q2.front();
        cout << t1 << " " << t2 << endl;
        q1.pop(), q2.pop();
        q1.push(t1), q2.push(t2);
    }
    
	return 0;
}


