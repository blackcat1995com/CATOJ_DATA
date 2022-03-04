#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int n;
int ans = 0;

bool is_hw(string& str){
	for(int i = 0; i < (str.size() + 1) / 2; i++)
      	if(str[i] != str[str.size() - 1 - i])
          	return false;
  	return true;
}

int main() {
  
  	cin >> n;
  
  	for(int i = 1; i <= n; i++){
  		string str = to_string(i);
      	if(is_hw(str)) ans++;
  	}
  
  	cout << ans << endl;
	
	return 0;
}

