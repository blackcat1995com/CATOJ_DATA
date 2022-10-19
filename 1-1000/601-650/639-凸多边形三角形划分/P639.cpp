#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

typedef unsigned long long ULL;

int n;
ULL h[40];

int main() {
  
  	while(cin >> n){
    	memset(h, 0, sizeof h);
      	h[2] = 1;
      
      	for(int i = 3; i <= n; i++){
        	for(int j = 2; j < i; j++)
              	h[i] += h[j] * h[i - j + 1];
        }
      	
      	cout << h[n] << endl;
    }


	return 0;
}
