#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

const int N = 110;

string s1, s2;
int ans = 0;

int main() {
  
  	cin >> s1 >> s2;
  
  	for(int i = 0; i < s1.size() - 1; i++){
    	if(s1[i] != s2[i]){
          	ans++;
        	if(s1[i] == '*') s1[i] = 'o';
          	else s1[i] = '*';
          	
          	if(s1[i + 1] == '*') s1[i + 1] = 'o';
          	else s1[i + 1] = '*';
        }
    }
  
  	cout << ans << endl;

	return 0;
}

