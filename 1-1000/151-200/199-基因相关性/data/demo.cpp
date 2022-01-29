#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
	freopen("6.in", "r", stdin);
	freopen("6.out", "w", stdout);
	string a, b;
	double num;
	int cnt = 0;
	cin >> num;
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++){
		if (a[i] == b[i])
			cnt++;
	}
	if (cnt*1.0 / a.length() >= num)
		cout << "yes";
	else
		cout << "no";
	return 0;
}
