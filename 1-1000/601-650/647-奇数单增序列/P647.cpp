#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> v;

int main() {

	cin >> n;
  	for(int i = 1; i <= n; i++){
    	int x;
      	cin >> x;
      	if(x & 1) v.push_back(x);
    }
  
  	sort(v.begin(), v.end());
  
  	for(int i = 0; i < v.size() - 1; i++) cout << v[i] << ",";
  	cout << v[v.size() - 1];
  
	return 0;
}
