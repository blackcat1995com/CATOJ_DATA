#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int n;
string s[25];
int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> s[i];
  
  	for(int i = 1; i <= n; i++){
    	for(int j = i + 1; j <= n; j++){
        	if(s[i] + s[j] < s[j] + s[i]){
            	string ts = s[i];
              	s[i] = s[j];
              	s[j] = ts;
            }
        }
    }
  
  	for(int i = 1; i <= n; i++) cout << s[i];

	return 0;
}

