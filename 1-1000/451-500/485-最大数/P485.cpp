#include <iostream>
#include <sstream>
#include <cstdio>
using namespace std;

const int INF = 0x3f3f3f3f;

int main(){
 
	string line;
	cin >> line;
	stringstream ss(line);

	string temp_str;
	double maxv = -INF;
	string str_ans;
	while (getline(ss, temp_str, ',')) {
	
		double d_num = stod(temp_str);
		if (maxv < d_num) {
			maxv = d_num;
			str_ans = temp_str;
		}
	}
	cout << str_ans << endl;
}
