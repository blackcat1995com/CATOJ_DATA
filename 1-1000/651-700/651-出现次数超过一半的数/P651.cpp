#include <iostream>
#include <cstdio>
#include <unordered_map>
using namespace std;

int n;
unordered_map<int, int> mp;

int main() {
	
  	cin >> n;	
  	for(int i = 1; i <= n; i++){
    	int x;
      	cin >> x;
      	mp[x]++;
    }
  
  	for(auto x: mp)
      	if(x.second > n / 2){
        	cout << x.first << endl;
          	return 0;
        }
  
  	puts("no");

	return 0;
}
