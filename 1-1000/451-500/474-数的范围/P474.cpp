#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e5 + 10;

int n, m, x;
int a[N];

int main() {
  
  	cin >> n >> m;
  	for(int i = 0; i < n; i++) cin >> a[i];
  
  	while(m--){
    	cin >> x;
      	int L = 0, R = n - 1;
        while(L < R){
            int mid = L + R >> 1;
            if(x <= a[mid])  R = mid;
            else L = mid + 1;
        }

        if(a[L] != x) cout << "-1 -1" << endl;
      	else{
        	cout << L << " ";
          	int L = 0, R = n - 1;
            while(L < R){  // L + 1 == R
                int mid = L + R + 1 >> 1;
                if(x >= a[mid])  L = mid;
                else R = mid - 1;
            }
          	cout << L << endl;
        }
        
    }
  
  	
	return 0;
}
