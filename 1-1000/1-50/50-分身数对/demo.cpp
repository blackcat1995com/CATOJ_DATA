#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 + 7;

int n, x, ans;
bool h[N];

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	int t;
      	cin >> t;
      	h[t] = true;
    }
  
  	cin >> x;
  	
  	for(int i = 1; i <= x / 2; i++)
      	if(h[i] && h[x - i] && i != x - i)
          	ans++;
  
  	cout << ans << endl;
	
	return 0;
}


