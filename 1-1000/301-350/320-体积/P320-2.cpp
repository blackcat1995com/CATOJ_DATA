#include <iostream>
#include <cstdio>
using namespace std;

const int N = 25, M = 1010;
int n;
int path[N];
bool h[M];
int ans = 0;

int main() {
  
  	cin >> n;
  	for(int i = 0; i < n; i++) cin >> path[i];
  
	for(int i = 0; i < 1 << n; i++){
    	int s = 0;
      	for(int j = 0; j < n; j++)
          	if(i >> j & 1) 
              	s += path[j];
      	h[s] = true;
    }
  
  	for(int i = 1; i < M; i++)
      	if(h[i]) ans++;
  
  	cout << ans << endl;
	
	return 0;
}


