#include <iostream>
#include <cstdio>
using namespace std;

const int N = 210;
char str[N];

int main() {
  
  	cin.getline(str, N);
  	char ch1, ch2;
  	cin >> ch1 >> ch2;
  	
  	for(int i = 0; str[i]; i++){
    	if(str[i] == ch1)
          	str[i] = ch2;
    }
  	
  	cout << str << endl;
	
	return 0;
}


