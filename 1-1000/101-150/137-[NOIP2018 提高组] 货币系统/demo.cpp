#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 110, M = 25010;

int n;
int a[N];
int f[M];

int main() {
  
  	int T;
  	cin >> T;
  
  	while(T--){
      
    	cin >> n;
      	for(int i = 1; i <= n; i++) cin >> a[i];
      
      	sort(a + 1, a + n + 1);
      
      	int m = a[n];
      	memset(f, 0, sizeof f);
      	
      	f[0] = 1;
      
      	int ans = 0;
      	for(int i = 1; i <= n; i++){
        	if(!f[a[i]]) ans++;
          	for(int j = a[i]; j <= m; j++)
              	f[j] += f[j - a[i]];
        }
      
      	cout << ans << endl;
    }
	
	return 0;
}

