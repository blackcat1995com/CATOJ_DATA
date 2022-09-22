#include <iostream>
#include <cstdio>
using namespace std;

int calc(int n){
  
	int res = 0;
  
  	for(int i = 1; i <= n / i; i++){
    	if(n % i == 0){
        	if(i != n / i) res += 2;
          	else res++;
        }
    }
  
  	return res;
}

int main() {
  
  	int n;
  	while(cin >> n, n){
    	while(n--){
        	int x;
          	cin >> x;
          	cout << calc(x) << endl;
        }
    }
	
	return 0;
}

