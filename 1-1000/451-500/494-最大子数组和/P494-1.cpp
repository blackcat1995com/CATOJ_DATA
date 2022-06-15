#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
  
  	int n;
  	cin >> n;
  	vector<int> nums;
  	while(n--){
    	int x;
      	cin >> x;
      	nums.push_back(x);
    }
  
  	int ans = -1e9;
  
  	for(int i = 0, last = 0; i < nums.size(); i++){
    	last = nums[i] + max(last, 0);
      	ans = max(ans, last);
    }
  
  	cout << ans << endl;

	return 0;
}

