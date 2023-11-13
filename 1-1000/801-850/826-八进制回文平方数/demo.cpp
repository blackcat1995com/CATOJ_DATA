#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<int> v;

int main() {

	cin >> n;
	
	for(int i = 1; i <= int(sqrt(1e9)) + 10; i++)
		v.push_back(i * i);
		
	for(auto x: v){
		if(x > n) break;
		int y = x;
		string s1 = "";
		while(y){
			s1 += char(y % 8 + '0');
			y /= 8;
		}
		string s2 = s1;
		reverse(s1.begin(), s1.end());
		if(s1 == s2) cout << x << " ";
	}
	
//	for(int i = 1; i <= n; i++){
//		int x = sqrt(i);
//		if(x * x != i) continue;
//		int j = i;
//		string s1 = "";
//		while(j){
//			s1 += char(j % 8 + '0');
//			j /= 8;
//		}
//		string s2 = s1;
//		reverse(s1.begin(), s1.end());
//		if(s1 == s2) cout << i << " ";
//	}
	return 0;
}


