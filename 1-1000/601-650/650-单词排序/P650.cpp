#include <iostream>
#include <cstdio>
#include <set>
#include <string>
using namespace std;

int main() {
  
  	int n;
  	cin >> n;
  
  	set<string> st;
  	
  	while(n--){
    	string str;
      	cin >> str;
      	st.insert(str);
    }
  
  	for(auto x: st) cout << x << endl;

	return 0;
}
