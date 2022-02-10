#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int n, m;
int a[N][N];

int main() {

	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin >> a[i][j];

	int sum = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			int t;
			cin >> t;
			if(t == a[i][j]) sum ++;
		}
	}
	// cout << sum << endl;
	double ans = sum * 1.0 / (n * m) * 100;
	printf("%.2lf\n", ans);
	
	return 0;
}


