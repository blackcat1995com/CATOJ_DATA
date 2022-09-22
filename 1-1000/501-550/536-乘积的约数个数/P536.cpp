#include <iostream>
#include <cstdio>
#include <unordered_map>
using namespace std;

const int MOD = 1e9 + 7;
typedef long long LL;

int n;
LL res = 1;

unordered_map<int, int> mp;

int main() {
  
  	cin >> n;
  	while(n--){
    	int x;
      	cin >> x;
      	for(int i = 2; i <= x / i; i++){
        	while(x % i == 0){
            	x /= i;
              	mp[i]++;
            }
        }
      	if(x > 1) mp[x]++;
    }
  
  	for(auto [k, v] : mp) res = res * (v + 1) % MOD;
  
  	cout << res << endl;
	
	return 0;
}

