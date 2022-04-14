#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e5 + 10;

int n;
int a[N] = {-1};

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  
  	for(int i = 1; i <= n; i++){
    	for(int j = i - 1; j >= 0; j--){
        	if(a[j] < a[i]){
            	cout << a[j] << " ";
              	break;
            }    	
        }
    }
	
	return 0;
}


