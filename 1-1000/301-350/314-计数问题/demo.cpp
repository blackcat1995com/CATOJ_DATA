#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int n;
char x;
int ans = 0;

void calc(string& str){
	for(auto s : str){
    	if(s == x) ans++;
    }
}

int main() {
  
  	cin >> n >> x;
  
  	for(int i = 1; i <= n; i++){
    	string str = to_string(i);
      	calc(str);
    }
  
  	cout << ans << endl;
	
	return 0;
}


