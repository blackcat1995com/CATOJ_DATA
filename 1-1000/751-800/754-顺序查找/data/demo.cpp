#include <iostream>
using namespace std;

const int N = 510;

int n, k;
int a[N];
 
int main() {
	freopen("2.in", "r", stdin);
	freopen("2.out", "w", stdout);
	cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> a[i];
	
	while(k--){
		int x;
		cin >> x;
		int res = -1;
		for(int i = 0; i < n; i++)
			if(a[i] == x){
				res = i;
				break;
			}
		cout << res << " ";
	}
	return 0;
}

