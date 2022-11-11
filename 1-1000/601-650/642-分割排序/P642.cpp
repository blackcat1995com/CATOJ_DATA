/*
0051231232050775

00 12312320 077 
0 12312320 77

str[i] - '0' = 1
1*10 + 2
x*10 + str[i] - '0' = 12 * 10 + 3
*/

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	string str;
  	while(cin >> str){
    	vector<int> v;
      	for(int i = 0; i < str.size(); i++){
        	if(str[i] != '5'){
            	int x = 0;
              	while(str[i] != '5' && i < str.size())
                  	x = x * 10 + str[i++] - '0';
              	i--;
              	v.push_back(x);
            }
        }
      
      	sort(v.begin(), v.end());
  
  		for(auto x: v) cout << x << " ";
      	puts("");
    }
  
	return 0;
}
