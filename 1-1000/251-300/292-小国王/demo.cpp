#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

typedef long long LL;
const int M = 1 << 10;

int n, k;
vector<int> state, h[M];

int cnt[M];
LL f[12][110][M];

bool check(int state){
	return !(state & state >> 1);
}

int count(int state){
	int res = 0;
	for(int i = 0; i < n; i++)
		res += state >> i & 1;
	return res;
}

int main() {

	cin >> n >> k;
	for(int i = 0; i < 1 << n; i++)
		if(check(i))
			state.push_back(i);

	for(int i = 0; i < state.size(); i++)
		for(int j = 0; j < state.size(); j++){
			int a = state[i], b = state[j];
			if((a & b) == 0 && check(a | b))
				h[i].push_back(j);
		}
	

	f[0][0][0] = 1;
	for(int i = 1; i <= n + 1; i++)
		for(int j = 0; j <= k; j++)
			for(int a = 0; a < state.size(); a++)
				for(auto b : h[a]){
					if(j >= count(state[a]))
						f[i][j][a] += f[i - 1][j - count(state[a])][b];
				}

	cout << f[n + 1][k][0] << endl;

	return 0;
}


