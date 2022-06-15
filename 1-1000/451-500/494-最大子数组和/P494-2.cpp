#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int calc(int L, int R, vector<int>& nums){
	if(L == R) return nums[L];
  	
  	int mid = L + R >> 1;
  	
  	int lmax = nums[mid], lsum = 0, rmax = nums[mid + 1], rsum = 0;
  	for(int i = mid; i >= L; i--){
    	lsum += nums[i];
      	lmax = max(lmax, lsum);
    }
  
  	for(int i = mid + 1; i <= R; i++){
    	rsum += nums[i];
      	rmax = max(rmax, rsum);
    }
  
  	return max(max(calc(L, mid, nums), calc(mid + 1, R, nums)), lmax + rmax);
}

int main() {
  
  	int n;
  	cin >> n;
  	vector<int> nums;
  	while(n--){
    	int x;
      	cin >> x;
      	nums.push_back(x);
    }
  
  	cout << calc(0, nums.size() - 1, nums) << endl;

	return 0;
}

