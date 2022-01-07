#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;

int main() {

	int n;
	string str;

	scanf("%d\n", &n);

	while(n--){
		int ans = 0;
		getline(cin, str);
		stringstream ssin(str);
		int p;
		while(ssin >> p) ans += p;
		cout << ans << endl;
	}
	
	return 0;
}


