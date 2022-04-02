#include <iostream>
#include <cstdio>
using namespace std;

void work(int n){
	cout << n % 10;
  	if(n / 10) work(n / 10);
}

int main() {

  	int n;
  	cin >> n;
  	work(n);
	
	return 0;
}


