#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 + 10;

int n;
int s[N], tt = 0;
int h[N], w[N];
int sum[N];

int main() {

	cin >> n;
	
	for(int i = 1; i <= n; i++)
		cin >> h[i] >> w[i];
		
	for(int i = 1; i <= n; i++){
		// µ¥µ÷µÝ¼õÕ»
		while(tt && h[s[tt]] <= h[i]){
			if(h[s[tt]] == w[i])
				tt--;
			else
				sum[i] += w[s[tt--]];  
		}
		sum[s[tt]] += w[i];
		s[++tt] = i;
	}
	
	int res = 0;
	for(int i = 1; i <= n; i++)
		res = max(res, sum[i]);
		
	cout << res << endl;
	
	return 0;
}

