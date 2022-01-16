#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

int main() {
  
  	int n;
  	LL ans = 1;
  	
  	cin >> n;
  
  	for(int i = 1; i <= n; i++)
      	ans *= i;
  
  	cout << ans << endl;
	
	return 0;
}


