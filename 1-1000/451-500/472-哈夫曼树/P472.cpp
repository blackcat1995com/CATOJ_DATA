#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int main() {
  
  	int n;
  	
  	while(cin >> n){
    	priority_queue<int, vector<int>, greater<int> > q;
      	while(n--){
        	int x;
          	cin >> x;
          	q.push(x);
        }
      
      	int res = 0;
      	while(q.size() > 1){
        	int a = q.top();
          	q.pop();
          	int b = q.top();
          	q.pop();
          
          	int t = a + b;
          	q.push(t);
          	res += t;
        }
      	cout << res << endl;
    }

	return 0;
}

