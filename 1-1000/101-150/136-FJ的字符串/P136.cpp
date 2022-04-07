#include <iostream>
#include <cstdio>
using namespace std;

void work(int n){
	if(n == 1){
    	cout << "A";
      	return;
    }
  
  	work(n - 1);
  	cout << char('A' + n - 1);
  	work(n - 1);
}

int main() {
  
  	int n;
  	cin >> n;
  	work(n);
	
	return 0;
}


