#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

typedef unsigned long long ULL;

int n;
ULL a[1010];

int main() {
  
  	while(cin >> n){
    	memset(a, 0, sizeof a);
      	a[1] = 2;
      	for(int i = 2; i <= n; i++) a[i] = a[i - 1] + 2 * (i - 1);
      	cout << a[n] << endl;
    }


	return 0;
}
