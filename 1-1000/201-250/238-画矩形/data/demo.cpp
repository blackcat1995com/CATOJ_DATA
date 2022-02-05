#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int n, m;
	char ch;
	int flag;

	cin >> n >> m >> ch >> flag;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(i == 1 || i == n || j == 1 || j == m)
				cout << ch;
			else if(flag) cout << ch;
			else cout << " ";
		}
		puts("");
	}
	
	return 0;
}
