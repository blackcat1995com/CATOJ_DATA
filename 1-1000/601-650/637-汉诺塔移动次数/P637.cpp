#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

typedef unsigned long long ULL;

int n;
ULL a[110];

int main() {
  
  	while(cin >> n){
    	memset(a, 0, sizeof a);
      	a[1] = 1;
      	for(int i = 2; i <= n; i++) a[i] = 2 * a[i - 1] + 1;
      	cout << a[n] << endl;
    }


	return 0;
}
