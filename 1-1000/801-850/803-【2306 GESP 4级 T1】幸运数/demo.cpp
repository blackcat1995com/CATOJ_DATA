#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int calc(int n){
//	n = n * 7;
	if(n <= 9)
		return n;
	string str = to_string(n);
	int res = 0;
	for(auto x: str)
		res += x - '0';
//	return calc(res);
//	cout << res << endl;
	return calc(res);
}
int main() {

//	cout << calc(5 * 7) << endl;
	int n;
	cin >> n;
	
	while(n--){
		string line;
		cin >> line;
		int sum = 0;
		for(int i = line.size() - 2; i >= 0; i -= 2)
			sum += line[i] - '0';
		for(int i = line.size() - 1; i >= 0; i -= 2)
			sum += calc((line[i] - '0') * 7);
		
		if(sum % 8 == 0) cout << "T" <<endl;
		else cout << "F" << endl;

	}

	return 0;
}

