#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

class Solution {
public:
    
    int calc(int L, int R, vector<int>& nums){
        if(L == R) return nums[L];
        
        int mid = (L + R) >> 1;
        
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
    
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        return calc(0, len - 1, nums);
    }
};

int main() {

	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	
	vector<int> nums;
	int n;
	cin >> n;
	while(n--) {
		int x;
		cin >> x;
		nums.push_back(x);
	}
	
	Solution s;
	cout << s.maxSubArray(nums) << endl;

	fclose(stdin);
	fclose(stdout);
	
	return 0;
}

