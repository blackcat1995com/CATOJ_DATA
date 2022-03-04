#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

LL calc(int x){
	LL res = 1;
  	for(int i = 1; i <= x; i++)
      	res *= i;
  	return res;
}

int main() {
  
  	int n, m;
  	cin >> n >> m;
  	cout << calc(n) / calc(m) / calc(n - m) << endl;
	
	return 0;
}


