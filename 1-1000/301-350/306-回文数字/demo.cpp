#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

bool is_hw(string& str){
	for(int i = 0; i < (str.size() + 1) / 2; i++)
		if(str[i] != str[str.size() - 1 - i])
			return false;
	return true;
}

int count(string& str){
	int res = 0;
	for(auto x : str)
		res += x - '0';
	return res;
}

int main() {

	int n;
	cin >> n;
	
	bool flag = false;

	for(int i = 10000; i <= 999999; i++){
		string str = to_string(i);
		if(is_hw(str) && count(str) == n){
			cout << i << endl; 
			flag = true;
		}
	}
	
	if(!flag) puts("-1");

	return 0;
}


