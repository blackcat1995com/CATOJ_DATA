#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010;

int m, n;
int q[N];
bool h[N];
int ans = 0;

int main() {

	cin >> m >> n;

	int hh = 0, tt = 0;

	while(n--){
		int x;
		cin >> x;
		if(h[x]) continue;
		if(tt - hh == m){
			int t = q[hh++];
			h[t] = false;
		}
		q[tt++] = x;
		h[x] = true;
		ans++;
	}
	
	cout << ans << endl;

	return 0;
}
