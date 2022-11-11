/*
ch - 'a'
a[26]
*/

#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

string str;
map<char, int> mp;

int main() {

	cin >> str;
  	for(auto x: str) mp[x]++;
  	
  	int cnt = -1;
  	char ch;
  	for(auto x: mp)
      	if(x.second > cnt)
          	cnt = x.second, ch = x.first;
  	cout << ch << " " << cnt << endl;
  
	return 0;
}
