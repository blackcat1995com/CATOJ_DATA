#include <iostream>
#include <cstdio>
using namespace std;

const int N = 85;

char str[N];

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);

	cin.getline(str, 85);

	// cout << str << endl;

	for(int i = 0; str[i]; i++){
		if((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
			cout << char(str[i] + 1);
		else if(str[i] == 'z') cout << 'a';	
		else if(str[i] == 'Z') cout << 'A';
		else cout << str[i];
	}
	
	return 0;
}


