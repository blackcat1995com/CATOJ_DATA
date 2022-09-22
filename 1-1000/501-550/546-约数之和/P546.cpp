#include <iostream>
#include <cstdio>
#include <unordered_map>
using namespace std;

const int MOD = 1e9 + 7;
typedef long long LL;

int n;
unordered_map<int, int> mp;
LL res = 1;

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
  
  	for(auto [k, v] : mp){
    	LL t = 1;
      	while(v--) t = (t * k + 1) % MOD;
      	res = res * t % MOD;
    }
  
  	cout << res << endl;
	
	return 0;
}

