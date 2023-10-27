#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 1e6 + 10, INF = 0x3f3f3f3f;

int n, V;
int f[N];

int main() {

	memset(f, 0x3f, sizeof f);
	f[0] = 0;
	
	cin >> n >> V;
	
	while(n--){
		int c, v;
		cin >> c >> v;
		for(int j = V; j >= 0; j--){
			f[j] = min(f[j], f[max(j - v, 0)] + c);
		}
	}
	
	if(f[V] == INF) cout << "no solution" << endl;
	else cout << f[V] << endl;

	return 0;
}



