#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int a[15];

int main() {
  
  	while(cin >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8] >> a[9] >> a[10]){
    	vector<int> A, B;
      	for(int i = 1; i <= 10; i++){
        	if(a[i] & 1) A.push_back(a[i]);
          	else B.push_back(a[i]);
        }
      
      	sort(A.begin(), A.end(), greater<int>());
      	sort(B.begin(), B.end());
      
      	for(auto x: A) cout << x << " ";
      	for(auto x: B) cout << x << " ";
      	puts("");
    }
	
	return 0;
}

