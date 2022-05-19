#include <iostream>
#include <cstdio>
using namespace std;

bool flag;

void work(int n, int k){
	if(n < k) return;
  	while(n % k) k++;
  	if(!flag){
    	flag = true;
      	cout << k;
    }
  	else cout << "*" << k;
  	
 	work(n / k, k);
}

int main() {
  
  	int T;
  	cin >> T;
  	
  	while(T--){
    	int x;
      	cin >> x;	
      	flag = false;
      	work(x, 2);
      	puts("");
    }

	return 0;
}

