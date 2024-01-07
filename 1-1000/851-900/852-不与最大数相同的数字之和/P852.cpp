#include <iostream>
#include <cstdio>
using namespace std;

int n;
int a[110];

int main() {

	cin >> n;
	
	int maxv = -1e9;
	
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		maxv = max(maxv, a[i]); 
	}

	int res = 0;
	for(int i = 1; i <= n; i++)
		if(a[i] != maxv)
			res += a[i];
			
	cout << res << endl;
	
	return 0;
}
