#include <iostream>
#include <cstdio>
using namespace std;

void work(int n){
	int mod = n % 8;
  	if(n / 8) work(n / 8);
  	cout << mod;
}

int main() {

	int n;
  	cin >> n;
  	work(n);
  
	return 0;
}


