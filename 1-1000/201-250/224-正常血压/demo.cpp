#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	int cnt = 0, maxv = 0;
	for(int i = 1; i <= n; i++){
		int a, b;
		cin >> a >> b;
		if(a >= 90 && a <= 140 && b >= 60 && b <= 90)
			cnt++; 
		else{
			maxv = max(maxv, cnt);
			cnt = 0;
		}
	}
	
	cout << max(maxv, cnt) << endl;
	
	return 0;
}
