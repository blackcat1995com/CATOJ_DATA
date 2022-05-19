#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> get_divisors(int n){
	vector<int> res;
  	for(int i = 1; i <= n / i; i++){
    	if(n % i == 0){
        	res.push_back(i);
          	if(i != n / i) res.push_back(n / i);
        }
    }
  	sort(res.begin(), res.end());
  	return res;
}

int main() {
  
  	int T;
  	cin >> T;
  	
  	while(T--){
    	int x;
      	cin >> x;
      	auto res = get_divisors(x);
      	for(auto x : res)
          	cout << x << " ";
      	puts("");
    }

	return 0;
}

