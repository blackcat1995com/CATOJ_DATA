#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

bool is2(string str){

	for(auto x: str){
		if(x < '0' || x > '1')
			return false;
	}

	return true;
}

bool is8(string str){

	for(auto x: str){
		if(x < '0' || x > '7')
			return false;
	}

	return true;
}

bool is10(string str){

	for(auto x: str){
		if(x < '0' || x > '9')
			return false;
	}

	return true;
}

bool is16(string str){

	for(auto x: str){	
		if(!(x >= '0' && x <= '9' || x >= 'A' && x <= 'F'))
			return false;
	}

	return true;
}

int main() {
	
	int n;
	cin >> n;
	
	while(n--){
		string str;
		cin >> str;
		printf("%d %d %d %d\n", is2(str), is8(str), is10(str), is16(str));
	}

	return 0;
}

/*
4
1234567
12345678
FF
GG
*/
