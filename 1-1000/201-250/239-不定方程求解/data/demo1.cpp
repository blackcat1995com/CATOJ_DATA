#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	int a, b, c, ans = 0;
	cin >> a >> b >> c;
	for(int i = 0; i <= 1000; i++)
		for(int j = 0; j <= 1000; j++)
			if(a * i + b * j == c) 
				ans++;
				// if(i == j)
				// 	ans++;
				// else
				// 	ans += 2;

	cout << ans << endl;
	
	return 0;
}


