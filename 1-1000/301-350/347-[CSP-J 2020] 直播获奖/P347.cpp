#include <iostream>
#include <cstdio>
using namespace std;

const int N = 610;

int a[N];
int n, w;

int main() {
  
  	cin >> n >> w;
  	for(int i = 1; i <= n; i++){
    	int t;
      	cin >> t;
      	a[t]++;
      	int sum = 0;
      	for(int j = N; j >= 0; j--){
        	sum += a[j];
          	if(sum >= max(1, i * w / 100)){
            	cout << j << " ";
              	break;
            }
        }
    }

	return 0;
}

