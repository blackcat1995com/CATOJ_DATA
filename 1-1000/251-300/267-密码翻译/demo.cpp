#include <iostream>
#include <cstdio>
using namespace std;

const int N = 85;

char str[N];

int main() {

	cin.getline(str, 85);

	for(int i = 0; str[i]; i++){
		if((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
			cout << char(str[i] + 1); 
		else if(str[i] == 'z') cout << 'a';	
		else if(str[i] == 'Z') cout << 'A';
		else cout << str[i];
	}
	
	return 0;
}
