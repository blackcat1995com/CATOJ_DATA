#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int n;
priority_queue<int, vector<int>, greater<int> > q;

int res = 0;

int main() {

    cin >> n;
    
    while(n--){
        int x;
        cin >> x;
        q.push(x);
    }
    
    while(q.size() > 1){
        int a = q.top(); q.pop();
        int b = q.top(); q.pop();
        res += a + b;
        q.push(a + b);
    }
    
    cout << res << endl;

	return 0;
}
