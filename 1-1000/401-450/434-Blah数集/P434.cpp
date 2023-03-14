/*
1 3 4 7 9 10
*/

#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 + 10;

int a, n, q[N];

void work(int a, int n){
	q[1] = a;
    int two = 1, three = 1, rear = 1;
    
    while(rear <= n){
        int t1 = q[two] * 2 + 1, t2 = q[three] * 3 + 1;
        int t = min(t1, t2);
        if(t1 < t2) two++;
        else three++;
     	if(t <= q[rear]) continue;
        q[++rear] = t;
    }
    
    cout << q[n] << endl;
}

int main() {

	cin >> a >> n;
    work(a, n);
    
	return 0;
}


