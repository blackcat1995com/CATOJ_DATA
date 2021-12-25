#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 1010, INF = 0x3f3f3f3f;

int n;
int a[N];

int main() {

	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];

	for(int i = 1;  i <= n; i++){
		int ans = 0, maxv = INF;
		for(int j = 1; j <= n; j++){
			if(a[j] > a[i] && a[j] < maxv){
				ans = j;
				maxv = a[j];
			}
		}
		cout << ans << endl;
	}
		
	return 0;
}

