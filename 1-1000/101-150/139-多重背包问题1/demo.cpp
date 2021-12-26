#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int n, m;
int f[N];

int main() {
  
  	cin >> n >> m;
  
  	while(n--){
    	int v, w, s;
      	cin >> v >> w >> s;
      	for(int j = m; j >= v; j--)
          	for(int k = 0; k <= s && k * v <= j; k++)
              	f[j] = max(f[j], f[j - k * v] + k * w);
    }
  
  	cout << f[m] << endl;
	
	return 0;
}

