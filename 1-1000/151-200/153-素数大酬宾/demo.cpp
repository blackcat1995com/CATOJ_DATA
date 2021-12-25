#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e5 + 10;

bool is_prime(int n){
	if(n < 2) return false;
  	for(int i = 2; i <= n / i; i++)
      	if(n % i == 0) return false;
  	return true;
}

int main() {
  
  	int n;
  	cin >> n;
  	for(int i = 2; i <= n; i++) 
      	if(is_prime(i)) cout << i << " ";
	
	return 0;
}

