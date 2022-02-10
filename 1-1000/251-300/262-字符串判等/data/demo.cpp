#include <iostream>
#include <string>
#include <sstream> 
#include <algorithm>
using namespace std;

string line1, line2, tmps, str1, str2;

void work(string line, string& str){
	stringstream ssin(line);
	string tmps;
	while(ssin >> tmps) str += tmps;
	transform(str.begin(), str.end(), str.begin(), ::toupper);
}

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	getline(cin, line1);
	getline(cin, line2);

	work(line1, str1);
	
	work(line2, str2);

	if(str1 == str2) cout << "YES" << endl;
	else cout << "NO" << endl;

	
	return 0;
}


