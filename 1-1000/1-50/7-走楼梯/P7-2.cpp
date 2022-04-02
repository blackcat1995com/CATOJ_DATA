#include <iostream>
#include <cstdio>
using namespace std;

int n;

int step(int n){
	if(n == 1) return 1;
  	if(n == 2) return 2;
  	return step(n - 1) + step(n - 2);
}

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++)
  		cout << step(i) << " ";
	
	return 0;
}


