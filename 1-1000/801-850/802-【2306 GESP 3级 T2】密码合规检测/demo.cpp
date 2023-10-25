#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

string line;
vector<string> v;

bool check(string str){
	
	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	bool flag = false;
	if(str.size() < 6 || str.size() > 12) return false;   
	for(auto x: str){
		if(x >= 'A' && x <= 'Z') cnt1++;
		else if(x >= 'a' && x <= 'z') cnt2++;
		else if(x >= '0' && x <= '9') cnt3++;
		else if(x == '!' || x == '@' || x == '#' || x == '$') flag = true;
		else return false;
	}
	
	if(cnt1 + cnt2 + cnt3 >= 2 && flag) return true;
	else return false;
}

int main() {

	cin >> line;
	for(auto &x: line)
		if(x == ',')
			x = ' ';
			
//	cout << line << endl;
	
	stringstream ssin(line);
	
	string str;
	while(ssin >> str) v.push_back(str);
	
//	cout << check() << endl;
	
	for(auto x: v)
		if(check(x))
			cout << x << endl;


	return 0;
}
