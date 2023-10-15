#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	int x, y, z, n, m;
	cin >> x >> y >> z >> n >> m;
	
	int res = 0;
	for(int i = 0; i * x <= n && i <= m; i++){
		for(int j = 0; j * y + i * x <= n && i + j <= m; j++){
			int k = (n - i * x - j * y) * z;
			if(i + j + k == m)
				res++;
		}
	}
	
	cout << res << endl;
		
	return 0;
}

