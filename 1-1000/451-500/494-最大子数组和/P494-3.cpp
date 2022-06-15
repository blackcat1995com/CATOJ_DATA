#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

struct Node{
	int sum, target, ls, rs;
  	/*
    	sum:当前区间所有元素和
        target:目标值 最大连续子序列和
        ls:最大前缀和
        rs:最大后缀和
    */
};

Node build(int l, int r, vector<int>& nums){
	if(l == r){
    	int v = max(nums[l], 0);
      	return {nums[l], v, v, v};
    }
  
  	int mid = l + r >> 1;
  	Node L = build(l, mid, nums), R = build(mid + 1, r, nums);
  
  	Node res;
  	res.sum = L.sum + R.sum;
  	res.target = max(max(L.target, R.target), L.rs + R.ls);
  	res.ls = max(L.ls, L.sum + R.ls);
  	res.rs = max(R.rs, R.sum + L.rs);
  
  	return res;
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
  
  	int t = -1e9;
  	for(auto x : nums) t = max(t, x);
  
  	if(t < 0) {
    	cout << t << endl;
      	return 0;
    }
  
  	Node ans = build(0, nums.size() - 1, nums);
  
  	cout << ans.target << endl;

	return 0;
}

